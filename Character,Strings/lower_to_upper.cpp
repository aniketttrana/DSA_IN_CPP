#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{

    char ch[100];
    cin.getline(ch, 100);

    int size = strlen(ch);

    // to convert lower case to upper case
    // -'a' +'A'
    for (int i = 0; i < size; i++)
    {
        ch[i] = ch[i] - 'a' + 'A';
    }
    // upper to lower
    // -'A'+'a'
    for (int i = 0; i < size; i++)
    {
        cout << ch[i];
    }
}