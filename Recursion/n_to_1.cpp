#include <iostream>
using namespace std;

void printt(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    // cout << i << " "; // reverse order

    printt(i - 1, n);
    cout << i << " "; // that order
}

int main()
{

    int n;
    cin >> n;
    printt(n, n);
    return 0; // Return a value from main
}
