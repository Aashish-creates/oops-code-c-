#include <iostream>
#include<string>
#include<exception>
using namespace std;
class invalid : public exception
{
    public:
    string s;
    invalid(string s)
    {
        this->s = s;
    }
    const char* what()
    {
        return "INVALID STRING";
    }
};
int main()
{
    try
    {
        string s; 
        cout<<"enter the string :";
        getline(cin,s);

        if(s == "JAI HIND" ||  s== "jai hind")
        {
             cout<<"your string "<<s<<" is correct"<<endl;
        }
        else
        {
            invalid ob(s);
            throw ob;
        }
    }
    catch(invalid ob)
    {
        cout<<ob.what();
    }
cout<<endl;
 cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by:Aahish Subedi CSE(K)" << endl;
    cout << "*********************************************" << endl;
    return 0;
}
