#include <iostream>
using namespace std;
// remove dublicate in an string
int main()
{
    string str;
    string str1 = "";
    cin >> str;
    int i = 0;
    int j = str.length() - 1;
    while (i < str.length())
    {
        if (str[i] != str[j])
        {
            if (str1.length() - 1 > 0 && str1[str1.length() - 1] == str[i])
            {
                str1.pop_back();
            }
            else
            {
                str1.push_back(str[i]);
            }
            i++;
        }
        cout<<str1;
    }
    
}