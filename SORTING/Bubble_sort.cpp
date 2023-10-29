#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = size - 1; i >= 0; i++)
    {
        for (int j = 0; j < i - 1; j++) // Corrected the loop condition here
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
