// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string str1;
//     string str2;
//     cin >> str1 >> str2;
    // bool res = true;
    // if (str1.size() != str2.size())
    // {
    //     res = false;
    // }
    // // Sort the characters in both strings
    // sort(str1.begin(), str1.end());
    // sort(str2.begin(), str2.end());
    // if (str1 == str2)
    // {
    //     res = true;
    // }
    // if (res == true)
    // {
    //     cout << "YEs";
    // }
    // if (res == false)
    // {
    //     cout << "NO";
    // }
#include <iostream>
#include <unordered_map>
#include <vector>
    using namespace std;
    void Anagrams(string str1, string str2, int size1,int size2)
    {
        unordered_map<char, int> umap;
        if (str1.size() != str2.size())
        {
            cout << "size not equal";
            return;
        }
        else
        {
            for (int i = 0; i < str1.size(); i++)
            {
                umap[str1[i]]++;
            }
            for (int i = 0; i < str1.size(); i++)
            {
                umap[str2[i]]--;
            }
        }
        for(auto itt:umap){
            if(itt.second!=0){
                cout<<"not anagram";
                return;
            }
            else{
                cout<<"Anagram";
                return;
            }
        }
    }

    int main()
    {
        string str1;
        string str2;
        
        cin >> str1;
        cin >> str2;
        int size1=str1.size();
        int size2=str2.size();
        Anagrams(str1, str2,size1,size2);
    }
