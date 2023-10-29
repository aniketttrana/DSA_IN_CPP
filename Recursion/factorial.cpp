#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        // when this execute means at last it return n to be 0
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n = 5;
    cout << factorial(n);
}