#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1;
    int Or = n * (n + 1) / 2;
    int sum;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}
