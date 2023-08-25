#include<iostream>
using namespace std;
class complex
{
int a;
int b;
public :
void setdata(int v1,int v2)
{
    a=v1;
    b=v2;
}
void bysum(complex c1,complex c2)
{
    a=c1.a+c2.a;
    b=c1.b+c2.b;
}
void print()
{
cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
}

};
int main()
{
   complex c1[3];
for(int i=0;i<2;i++)
   {
cout<<"enter the real part"<<endl;
    int a;
cin>>a;
cout<<"enter the imaginary part"<<endl;
    int b;cin>>b;
    c1[i].setdata(a,b); 
   }
   c1[2].bysum(c1[0],c1[1]);
for(int i=0;i<3;i++)
   {
    c1[i].print();
   }
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 

    return 0;
}
