#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}
int main()
{
    int arr[9] = {0, 1, 2, 2, 1, 1, 0, 0, 1};
    int max = arr[0];
    cout<< "Given arrays is: ";
    print(arr, 9);

    for (int i = 0; i < 8; i++)
    {
        int min = i;
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    cout<< "Final sorted arrays: ";
    print(arr, 9);

    return 0;
}
