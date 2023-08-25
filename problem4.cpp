#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
   
    int arr[4][4];
    int CityCode,CarCode;
    int choice=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            
        arr[i][j] = 0;
        }
        
    }
    do{
        cout<<"Enter [0] for Delhi"<<endl; 
        cout<<"Enter [1] for Mumbai"<<endl; 
        cout<<"Enter [2] for Chennai"<<endl; 
        cout<<"Enter [3] for Kolkata"<<endl; 
        cout<<"Enter [0] for Maruti-K10"<<endl; 
        cout<<"Enter [1] for Zen-Astelo"<<endl; 
        cout<<"Enter [2] for Wagnor "<<endl; 
        cout<<"Enter [3] for Maruti-SX4"<<endl; 
        cout<<"Enter the city code: ";
        cin>>CityCode;
        cout<<"Enter the car code: ";
        cin>>CarCode;
        arr[CityCode][CarCode]++;
        cout<<"Enter [1] to continue and [0] to stop: ";
        cin>>choice;
    }while(choice==1);
    cout<<setw(24)<<"Maruti-K10"<<" Zen-Astelo Wagnor Maruti-SX4"<<endl;
    for (int i = 0; i < 4; i++)
    {
        if(i==0){
          cout<<setw(10)<<"Delhi";
        }
        if(i==1){
          cout<<setw(10)<<"Mumbai";
        }
        if(i==2){
          cout<<setw(10)<<"Chennai";
        }
        if(i==3){
          cout<<setw(10)<<"Kolkata";
        }
        for (int j = 0; j < 4; j++)
        {
            cout<<setw(10)<<arr[i][j];
        }
        cout<<endl;
    }
     cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by:AASHISH SUBEDI    CSE3(K), Class Roll no: 1" << endl;
    cout << "*********************************************" << endl;
    return 0;
}