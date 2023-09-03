#include <iostream>
using namespace std;
// STRINGS
// here we cant access the delimeter
int main()
{
    string str;
    cin >> str;
    cout << str << endl;
    cout << str.length() << endl;
    cout << str.empty() << endl;
    str.push_back('d');

    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    cout << str.substr(0, 3);
    // (position,length)
    // 1 step below 3
    cout << str;
    // see original str is not modified

    string a = "aniket";
    string b = "aniket";
    if (a.compare(b) == 0)
    {
        cout << "same";
    }
    else
    {
        cout << "Not same";
    }
}