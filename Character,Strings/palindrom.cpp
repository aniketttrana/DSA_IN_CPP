#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    int i = 0;
    int size = strlen(ch);
    int j = size - 1;
    bool res = true;
    while (i < j)
    {
        if (ch[i] != ch[j])
        {
            res = false;
            break;
        }
        i++;
        j--;
    }
    if (res == false)
    {
        cout << "Not palindrom" << endl;
    }
    else
    {
        cout << "Palindrom" << endl;
    }
}