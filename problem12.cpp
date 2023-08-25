#include<iostream>
using namespace std;
class employee
{
    string name;
    int age;
    int code;
public :

employee()
        {
           name="Aashish";
           age=20;
           code =007;
        }

        void setdata(string s,int i,int c)
        {
            name=s;
            age=i;
            code=c;

        }
        void display()
        {
cout<<name<<" "<<age<<" " <<code<<" "<<endl;
        }

        employee operator-(employee e2)
        {
            employee diff;
diff.age=age-e2.age;
            return (diff);
        }

        void diff()
        {
cout<<"The difference in their age is "<<age<<endl;
        }

};
int main()
{
    employee e1,e2;
    e2.setdata("karan",17,006);
    e1.display();
    e2.display();
    employee e3=e1-e2;
    e3.diff();
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 

    return 0;
}
