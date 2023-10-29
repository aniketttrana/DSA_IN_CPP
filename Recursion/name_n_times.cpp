#include <iostream>
using namespace std;

void printt(int i, int n)
{
    if (n < i)
    {
        return;
    }
    cout << "Aniket" << endl;

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