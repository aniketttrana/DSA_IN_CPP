#include <bits/stdc++.h>
using namespace std;
void square(int arr1[], int size1)
{
    vector<int> res;
    for (int i = 0; i < size1; i++)
    {
        res.push_back(arr1[i] * arr1[i]);
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < size1; i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{
    int arr1[] = {4, 3, 5, 1, 2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    square(arr1, size1);
}