#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int originalNum = num;
    int count = 0;

    while (num)
    {
        num = num / 10;
        count++;
    }

    num = originalNum;

    int digits[10];
    for (int i = 0; i < count; i++)
    {
        digits[i] = num % 10;
        num = num / 10;
    }


    num = originalNum;
    while (num)
    {
        int rem = num % 10;
        cout << rem << " ";
        num = num / 10;
    }

    return 0;
}
