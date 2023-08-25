#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class figure 
{public:
        virtual void draw()
     {
            cout<<"Drawing Guidelines for object"<<endl;
     }
};
class Circle : public figure
{
    public : 
        void draw()
      {
            cout<<"drawing the circle"<<endl;
      }
};
class rectangle : public figure
{
    public : 
        void draw()
     {
            cout<<"drawing the rectangle"<<endl;
      }
};
class square:public figure
{
    public:
    void draw()
    {
        cout<<"drawing square "<<endl;
    }
};
int main()
{
    figure *ptr;
    cout<<"demonstrate run time polymorphism using virtual keywords"<<endl;
    Circle c;
    ptr = &c;
    cout<<"drawing circle using draw() function invoked by ptr"<<endl;
    ptr->draw();

    rectangle r;
    ptr = &r;
    cout<<"drawing rectangle using draw() function invoked by ptr"<<endl;
    ptr->draw();
    
     square s;
    ptr = &s;
    cout<<"drawing square using draw() function invoked by ptr"<<endl;
    ptr->draw();
cout<<endl;
cout<< "*********************************************" <<endl; 
cout<< "Program Prepared & Executed by:Aahish Subedi CSE(K)" <<endl; 
cout<< "*********************************************" <<endl; 
return 0;
}