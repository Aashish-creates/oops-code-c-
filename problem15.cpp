 #include<iostream>
using namespace std;
namespace n1 {
    int x=10;
}

namespace n2{
    int x=20;
}
int main()
{
cout<<"This is of namespace n1 "<<n1::x<<endl;
cout<<"This is of namespace n2 "<<n2::x<<endl;
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aahish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
    return 0;
}
