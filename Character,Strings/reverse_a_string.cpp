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
    while (i < j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }
}