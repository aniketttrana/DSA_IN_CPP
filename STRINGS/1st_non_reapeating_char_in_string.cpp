#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cin >> str;
    int l=0;
    int h=str.size()-1;
    while(l<h){
        swap(str[l++],str[h--]);
    }
    unordered_map<char, int> omap;  // Using std::map instead of std::unordered_map

     for (int i = 0; i < str.size(); i++) {
        omap[str[i]]++;
    }
    for (auto it : omap) {
    //   cout<<it.first<<" --- "<<it.second<<endl;
  if (it.second == 1) {
     cout<<it.first;
       break;
     }
    }

    return 0;
}
