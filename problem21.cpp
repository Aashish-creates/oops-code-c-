#include<bits/stdc++.h>
using namespace std;
int main(){
 int noc=0,nol=0,now=0;
 ifstream fin;
 char fname[20],ch;
 cout<<"enter the source file name: ";
 gets(fname);
 fin.open(fname,ios::in);
 if(!fin){
 cout<<"invalid file name: ";
 exit(0);
 }
 fin.get(ch);
 while(fin){
 if(ch!=' '&& ch!='\n'){
 noc++;
 }
 if(ch==' ')
 now++;
 if(ch == '\n'){
 now++;
 nol++;
 }
 fin.get(ch); //fin<<ch
 }
 fin.close();
 cout<<"total number of characters : "<<noc<<endl;
 cout<<"total number of line: "<<nol<<endl;
 cout<<"total number of words: "<<now<<endl;
  cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by:Aashish Subedi CSE(K)" << endl;
    cout << "*********************************************" << endl;
 return 0;
}
