#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// remove dublicate in an array
int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int h = size - 1;
    while (l < h)
    {
        if (arr[l] == 1)
        {
            l++;
        }
        if (arr[h] == 0)
        {
            h--;
        }
        else
        {
            swap(arr[l++], arr[h--]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
