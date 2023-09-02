#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void pair_sum(int arr1[], int size1, int k)
{
    bool found = false;

    int i = 0;
    int j = size1 - 1;
    while (i < j)
    {

        if (arr1[i] + arr1[j] == k)
        {

            found = true;
            break;
        }
        else if (arr1[i] + arr1[j] > k)
        {
            j--;
        }
        else
        {
            i++;
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
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    pair_sum(arr1, size1, 7);

    return 0;
}
