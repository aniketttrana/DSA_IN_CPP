#include <iostream>
using namespace std;
int main()
{

    // prime number is a number whose sum of divisors is equal to the number
    int n;
    cin >> n;
    int sum = 0;
    int res = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == res)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a Prime number";
    }
}