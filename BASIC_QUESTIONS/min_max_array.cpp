#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, -2, -4, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "min is" << min << endl;
    cout << "max is  " << max;
}
