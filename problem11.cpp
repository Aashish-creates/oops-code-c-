#include<iostream>
using namespace std;
class people{
    public:
    string name;
    int age;
    public:
    void setdata()
    {
        int n;
        string s;
        cout<<"enter the name"<<endl;
        cin>>s;
        cout<<"enter the age"<<endl;
        cin>>n;
        name=s;
        age=n;
    }
    friend void comapare(people p1,people p2);

};
void compare(people a1,people a2)
{
    if(a1.age<a2.age)
    {
        cout<<a1.name<<" is younger than "<<a2.name<<endl;
    }
    else
    cout<<a2.name<<" is younger than "<<a1.name<<endl;
}
int main()
{
    people p1,p2;
    p1.setdata();
    p2.setdata();
    compare(p1,p2);
    cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
return 0;
}