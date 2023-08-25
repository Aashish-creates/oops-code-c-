#include<iostream> 
using namespace std; 
#include<iomanip> 
int main(){ 
int n; 
cout << "Input the number upto the tables to be formed: "; 
cin >> n; 
cout << "Multiplication table from 1 to " << n << endl; 
for(int i=1;i<=10;i++){ 
for(int j=1;j<=n;j++){ 
cout << setw(4) << j << "x" << i << "=" << i*j; 
} 
cout<<endl; 
} 
cout << "*********************************************" << endl; 
cout << "Program Prepared & Executed by: AASHISH SUBEDI, CSE(K), Class Roll no: 1" << endl; 
cout << "*********************************************" << endl; 
}
