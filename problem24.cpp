
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    v.pop_back();
    cout<<"Elements of the vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<"Elements of the vector in reverse order: "<<endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {

        cout << v[i] << " ";
    }
    cout<<endl;
     cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by:Aashish Subedi CSE(K)" << endl;
    cout << "*********************************************" << endl;
    return 0;
}