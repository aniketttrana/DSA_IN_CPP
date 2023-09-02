// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int size1, int size2)
{
    vector<int> res;
    for (int i = 0; i < size1; i++)
    {
        res.push_back(arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {

        res.push_back(arr2[i]);
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{
    int arr1[] = {4, 3, 5, 1, 2};
    int arr2[] = {10, 6, 8, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, arr2, size1, size2);
}