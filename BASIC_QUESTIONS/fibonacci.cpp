#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int n;
    cin >> n;
    int res;

    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++)
    {
        res = a + b;
        a = b;
        b = res;
        cout << res << " ";
    }
}