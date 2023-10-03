#include <iostream>
using namespace std;
// ERROR in this code
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{

    int n = 9;
    cout << fibo(n);
    return 0;

    // int a = 0;
    // int b = 1;
    // int n;
    // cin >> n;
    // int res;

    // cout << a << " " << b << " ";

    // for (int i = 2; i < n; i++)
    // {
    //     res = a + b;
    //     a = b;
    //     b = res;
    //     cout << res << " ";
    // }
}