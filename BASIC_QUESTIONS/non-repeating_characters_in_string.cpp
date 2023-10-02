#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> umap;
    for (int i = 0; i < str.size(); i++)
    {
        umap[str[i]]++;
    }

    for (auto x : umap)
    {
        if (x.second > 1)
        {
            cout << x.first << " ";
        }
    }
}