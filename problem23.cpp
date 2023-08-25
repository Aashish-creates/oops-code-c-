#include<bits/stdc++.h>
using namespace std;
// Custom Object
class Student
{
 public:
 int rollNumber;
 string stu_Name;
 Student(int rollNumber, string stu_Name)
{
 this->rollNumber = rollNumber;
 this->stu_Name = stu_Name;
 }
};
//Comparator function
bool comparator(const Student& s1, const Student& s2) {
 return s1.rollNumber < s2.rollNumber;
}
int main() {
 vector<Student> v;
 int n;
 cout<<"Enter number of students data you want to enter : "<<endl;
 cin>>n;
 for(int i=0;i<n;i++) {
 int rollNumber;
 string stu_Name;
 cout<<"Enter Roll Number:"<<endl;
 cin>>rollNumber;
 cout<<"Enter Student Name: "<<endl;
 cin>>stu_Name;
 cout<<endl;
 v.push_back(Student(rollNumber, stu_Name));
 }
 // Sorting the vector
 sort(v.begin(), v.end(), &comparator);
 for(auto i:v) {
 cout<<i.rollNumber<<' '<<i.stu_Name<<endl;
 }
 return 0;
}