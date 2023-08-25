#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, series = 0;
    cout << "Enter the number of terms in series: ";
    cin >> n;
    cout << endl
         << "Series of given terms is: ";
    while (n)
    {
        series = series * 10 + 9;
        sum = sum + series;
        cout << series << " ";
        n--;
    }
    cout << endl
         << "Sum of series: " << sum << endl;
    cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by:AASHISH SUBEDI    CSE3(K), Class Roll no: 1" << endl;
    cout << "*********************************************" << endl;
}
