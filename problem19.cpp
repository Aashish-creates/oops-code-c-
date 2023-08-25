 #include <iostream>
 #include <string>
 #include <exception>
using namespace std;
class invalid : public exception
{
    public:
    int age;
    invalid(int age)
    {
        this->age = age;
    }
    const char* what()
    {
        return "INVALID age";
    }
};
int main()
{
    try
    {
        int age;
        cout<<"enter the your age :";
        cin>>age;

        if(age > 18)
        {
             cout<<"your age "<<age<<" is valid"<<endl;
        }
        else
        {
            invalid ob(age);
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
