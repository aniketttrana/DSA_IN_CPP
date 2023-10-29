#include <iostream>
using namespace std;
// Selection sort : we select minimum and then swap with first element
int main()
{
    int arr[] = {12, 45, 34, 98, 6, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 2; i++)
    {
        int mini = i;
        for (int j = i; j < size - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}