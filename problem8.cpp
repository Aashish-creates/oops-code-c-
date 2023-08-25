#include <iostream>
using namespace std;
class TellCall
{
public:
    string phno;
    string sname;
    int n;
    float amt;
TellCall(string x, string y, int z)
    {
phno = x;
sname = y;
        n = z;
    }
    void compute();

    void display();
};

void TellCall::compute()
{
    if (n >= 1 && n <= 100)
    {
        amt = 500;
    }
    else if (n <= 200)
    {
        amt = 500 + (n - 100);
    }
    else if (n <= 300)
    {
        amt = 600 + (n - 200) * 1.20;
    }
    else
    {
        amt = 720 + (n - 300) * 1.5;
    }
}

void TellCall::display()
{
cout<<"--------------------------JIO PRIVATE LIMITED.-------------------------"<<endl;
cout<< "Phone no: " <<phno<<endl; 
cout<<"  Name: "<<sname<<endl;
cout<<"  No. of calls made: "<< n<<endl;
cout<<"  Bill amount: "<<"Rs."<<amt<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
}

int main()
{

TellCall a("8126862238 ", "Aashish", 700);
a.compute();
a.display();
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
    return 0;
}
