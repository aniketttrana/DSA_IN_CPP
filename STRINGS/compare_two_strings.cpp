#include <iostream>
using namespace std;

int main()
{
    string a = "rana";
    string b = "rana";
    bool res = true;
    if (a.length() != b.length())
    {
        res = false;
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            res = false;
        }
    }

    if (res == false)
    {
        cout << "NOT";
    }
    else
    {
        cout << "YES";
    }
}