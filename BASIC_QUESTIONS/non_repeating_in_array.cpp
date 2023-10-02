#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// NON repeating character
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 2, 2, 1, 6, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> umap;
    for (int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for (auto x : umap)
    {
        if (x.second < 2)
        {
            cout << x.first;
        }
    }
}