#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// remove dublicate in an array
int main()
{
    unordered_map<int, int> umap;
    int arr[] = {1, 2, 23, 3, 3, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for (auto it : umap)
    {
        if (it.second == 1)
        {
            cout << it.first << " ";
        }
    }
}
