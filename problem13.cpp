#include<iostream>
using namespace std;
class employee
{
    int static  count;
public :
employee()
    {
        count ++;
    }
    void display ()
    {
cout<<"total number od the objects are "<<count<<endl;
    }
};
int employee::count=0;
int main()
{
    employee e1,e2,e3,e4,e5;
    e4.display();
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
    return 0;

}
