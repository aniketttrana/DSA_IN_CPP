#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    bool res = true;
    if (str1.size() != str2.size())
    {
        res = false;
    }
    // Sort the characters in both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2)
    {
        res = true;
    }
    if (res == true)
    {
        cout << "YEs";
    }
    if (res == false)
    {
        cout << "NO";
    }
}
