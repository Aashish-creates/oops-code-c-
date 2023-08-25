#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;
    int c;

public:
    void setdata(int v1, int v2,int v3)
    {
        a = v1;
        b = v2;
        c=v3;
    }
    void sum(complex a1, complex a2,complex a3)
    {
        a = a1.a + a2.a+a3.a;
        b = a1.b + a2.b+a3.b;
        c= a1.c+a2.c+a3.c;
    }
    void print(void)
    {
        cout << "the no is " << a << "+" << b << "i" <<c <<endl;
    }
};
int main()
{
    complex c1, c2, c3,c4;
    c1.setdata(1, 3,5);
    c1.print();
    c2.setdata(2, 4,6);
    c2.print();
    c3.setdata(1,2,3);
    c3.print();
    c4.sum(c1,c2,c3);
    c4.print();
}