#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int res = 1;
    int count = 0;
    while (num)
    {
        num = num / 10;
        count++;
    }
    for (int i = 1; i <= count; i++)
    {
        res = res * i;
    }
    cout << res;
}