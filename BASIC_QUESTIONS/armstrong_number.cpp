#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cin >> num;
    int originalnumber = num;
    while (num)
    {
        num = num / 10;
        count++;
    }
    int last;
    int store = 0;

    int numm = originalnumber;
    while (originalnumber != 0)
    {
        last = originalnumber % 10;
        store = pow(last, count) + store;
        originalnumber = originalnumber / 10;
    }
    if (store == numm)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "NOt armstrong";
    }
    return 0;
}