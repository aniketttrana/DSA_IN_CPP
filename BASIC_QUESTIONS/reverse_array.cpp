#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, -2, -4, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int h = size - 1;
    while (l < h)
    {
        swap(arr[l++], arr[h--]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
