 #include<iostream>
 using namespace std;
  class student
  {
    string name;
    int roll_no;
public :
    student ()
    {
        name="Aashish";
roll_no=1;
    }
    void display()
    {
cout<<"The name of the student is "<<name<<endl<<"rollno.of the student is "<<roll_no<<endl;
    }

  };
  int main()
  {
     student s1;
     student *p;
     p=&s1;
     p->display();
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
     return 0;

  }
