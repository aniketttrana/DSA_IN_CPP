#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void pair_sum(int arr1[], int size1, int k)
{
    bool found = false;

    int i = 0;
    int j = 1;

    while (i < size1 && j < size1)
    {

        if (abs(arr1[i] - arr1[j]) == k)
        {

            found = true;
            break;
        }
        else if (abs(arr1[i] - arr1[j]) > k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    if (found == true)
    {
        cout << "PAIR EXISTS";
    }
    else
    {
        cout << "PAIR NOT EXISTS";
    }
}
int main()
{
    int arr1[] = {1, 3, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    pair_sum(arr1, size1, 2);

    return 0;
}
