#include<iostream>
using namespace std;
int main()
{
	int i,j;
	string s[6]={"Delhi	","Mumbai	","Kolkatta	","Chennai	","Dehradun	"};
	int arr[5][5]={11,29,21,21,27,28,29,23,23,63,24,23,24,24,74,25,24,25,25,35,56,56,16,46,25};
   
    cout<<endl;
	cout<<"Day        Delhi  \tMumbai \t\tKolkatta \tChennai	       Dehradun\n";
	for(i=0;i<5;i++)
	{
		cout<<(i+1)<<"            ";
		   cout<<arr[0][i]<<"\t\t"<<arr[1][i]<<"\t\t"<<arr[2][i]<<"\t\t"<<arr[3][i]<<"\t\t"<<arr[4][i];	
		
		cout<<"\n";
	}
	int min=arr[0][0];
	int max=arr[0][0];
    int a,b;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max<=arr[i][j])
			{max=arr[i][j];
			a=i;
			b=j;}
		}
	}
	cout<<"The maximum temperature is "<<max<<" in "<<s[a]<<" on day: "<<(b+1)<<"\n";
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(min>=arr[i][j])
			{
				min=arr[i][j];
				a=i;
				b=j;
			}
		}
	}
	cout<<"The minimum temperature is "<<min<<" in "<< s[a]<<" on  day : "<<(b+1)<<"\n";

cout << "\n******************" << endl; 
cout << "Program Prepared & Executed by: Aashish Subedi   , CSE3 (K), Class Roll no: 1 " << endl; 
cout << "\n******************" << endl; 
	return 0;	
}