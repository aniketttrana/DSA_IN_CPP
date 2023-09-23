#include <iostream>
using namespace std;

// 1234
// 1234
// 1234
// 1234
int main()
{
    int row;
    cin >> row;
    int k = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << k;
        }
        k++;
        cout << endl;
    }
}