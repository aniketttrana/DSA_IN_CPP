#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    int count = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        // it will count the spaces also so no problem at all
        // cout << ch[i];
        count++;
        i++;
    }
    cout << count << endl;
    cout << strlen(ch);
}