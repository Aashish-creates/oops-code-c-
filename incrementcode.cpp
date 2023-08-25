#include<bits/stdc++.h>
using namespace std;
class integer{
    int i;
    public:
    integer(int i=0)
    {
        this->i=i;
    }
    integer operator++(int)
    {
        integer temp=*this;
        i++;
        return temp;
    }
  int  display()
    {
        cout<<"i= "<<i<<endl;
    }

};
int main()
{
    integer i1(3);
    cout<<"before increment"<<endl;
    i1.display();

    integer i2 = i1++;
    cout<<"after post increment"<<endl;
    cout<<"i1= ";
    i1.display();
    cout<<"i2: ";
    i2.display();
    return 0;



}