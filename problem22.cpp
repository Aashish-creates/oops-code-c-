#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
class Employee{
 public:
 int empno;
 char empname[20];
};
Employee e;
fstream f;
char empname[20];
void addrec(){
 char c;
 fstream f;
 f.open("employee.txt",ios :: app|ios :: binary);
 while(1){
 cout << "\n Enter Employee name: ";
 cin >> e.empname;
 cin.ignore();
 cout << "\n Enter Employee number: ";
 cin >> e.empno;
 f.write((char *)&e, sizeof(e));
 cin.ignore();
 cout << "Do You want to Continue:?(Y/N): ";
 cin >> c;
 if(c == 'n' || c == 'N')
 break;
 }
 f.close();
}
void Semployee_no(){
 int eno;
 fstream f;
f.open("employee.txt",ios :: in|ios :: binary);
 cout << "\nEnter Employee Number: ";
 cin >> eno;
 while(f.read((char *)&e, sizeof(e))){
 if(eno == e.empno){
 cout << "\n\t" << e.empno << ":" << e.empname;
 break;
 }
 }
 f.close();
}
void Semployee_name(){
 fstream f;
 f.open("employee.txt",ios :: in | ios :: binary);
 while(f.read((char *)&e, sizeof(e))){
 if(strcmp(e.empname, "XYZ") == 0){
 cout << "\n\t" << e.empno << ":" << e.empname;
 break;
 }
 }
 f.close();
}
void display(){
 fstream f;
 f.open("employee.txt",ios :: in | ios :: binary);
 while(f.read((char *)&e, sizeof(e))){
 cout << "\n\t" << e.empno << ":" << e.empname;
 
 }
 f.close();
}
void Search_name(){
 fstream f;
 f.open("employee.txt",ios :: in | ios :: binary);
 cout << "Enter name to search: ";
 cin >> empname;
 while(f.read((char *)&e, sizeof(e))){
 if(strcmp(empname,e.empname) == 0){
 cout << "\n\t" << e.empno << ":" << e.empname;
 break;
 }
 }
 f.close();
}
int main(){
 int ch;
 while(1){
 cout << "\n\n 1. Add Records to the File";
 cout << "\n 2. Search Record by Employee No.";
 cout << "\n 3. Search Employye whose name is XYZ";
 cout << "\n 4. Display All Records";
 cout << "\n 5. Search Record by Employee Name";
 cout << "\n 6. Exit";
 cout << "\n\n Enter your Choice: ";
 cin >> ch;
 switch(ch){
 case 1:
 addrec();
 break;
 case 2:
 Semployee_no();
 break;
 case 3:
 Semployee_name();
 break;
 case 4:
 display();
 break;
 case 5:
 Search_name();
 break;
 case 6:
 exit(0);
 default:
 cout << "Invalid choice!!!!";
 }
 }
}
