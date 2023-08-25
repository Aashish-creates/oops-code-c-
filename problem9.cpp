#include<iostream>
using namespace std;
class Bankaccount{
    string name;
    int account_number;
    string acc_type;
    int Balance;

public :

Bankaccount()
  {
    name="aashish";
account_number=21011503;
acc_type="Saving";
    Balance=40000;
  } 


    void display()
    {
cout<<"The name of the account holder is "<<name<<endl;
cout<<"The Balance in the account is "<<Balance<<endl;
    }
      void deposite (int d)
    {

       Balance=Balance+d;

    }
    void withdraw()
    {
        int with;
cout<<"your available balance is "<<Balance<<endl;
cout<<"enter the amount to be withdraw"<<endl;
cin>>with;
        Balance=Balance-with;

    }
};
int main()
{
Bankaccount b1;
    string cha;
cout<<"do you want to deposit any money"<<endl;
cin>>cha;
    while(cha=="yes")
    {
cout<<"enter the amount to be deposit"<<endl;
        int d;
cin>>d;
        b1.deposite(d);
        break;
    }
cout<<"do you want to withdraw any money"<<endl;
    string ch;
cin>>ch;
    while(ch=="yes")
    {

        b1.withdraw();
        break;
    }
    b1.display();
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aashish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
    return 0;


}
