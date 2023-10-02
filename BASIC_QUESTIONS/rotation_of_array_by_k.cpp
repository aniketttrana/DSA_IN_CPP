#include <iostream>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void byk(int arr[], int size, int k)
{
    k = k % size;

    // Reverse the first 'k' elements
    reverse(arr, 0, k - 1);

    // Reverse the remaining elements
    reverse(arr, k, size - 1);

    // Reverse the entire array
    reverse(arr, 0, size - 1);

    // Print the reversed array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    byk(arr, size, k);

    return 0;
}
