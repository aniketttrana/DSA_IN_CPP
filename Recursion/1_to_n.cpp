#include <iostream>
using namespace std;

void printt(int i, int n)
{
    if (n < i)
    {
        return;
    }
    cout<<i<<" ";

    printt(i + 1, n);
}

int main()
{
    int i = 1;
    int n;
    cin >> n;
    printt(i, n);
    return 0; // Return a value from main
}
// void printt(int n)
// {
//     if (n == 5)
//     {
//         return;
//     }
//     cout << n << endl;
//     n++;
//     printt(n);
// }

// int main()
// {
//     printt(1); // Start with n=1
//     return 0;  // Return a value from main
// }