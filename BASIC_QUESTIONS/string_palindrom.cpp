#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int l = 0;
    bool res = true;
    int h = str.size() - 1;
    while (l < h)
    {
        if (str[l] != str[h])
        {
            res = false;
            break;
        }
        l++;
        h--;
    }
    if (res == false)
    {
        cout << "Not PAlindrom";
    }
    if (res == true)
    {
        cout << "Palindrom";
    }
}