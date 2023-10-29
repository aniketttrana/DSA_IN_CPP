#include <iostream>
using namespace std;

int summ(int n)
{
    if (n == 0)
    {
        // when this execute means at last it return n to be 0
        return 0;
    }
    return n + summ(n - 1);
}
int main()
{
    int n = 3;
    cout << summ(n);
}