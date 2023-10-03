#include<iostream>
using namespace std;
// Write a code to Remove all characters from string except alphabets
int main() {
    string str;
    cin >> str;
    string result = "";
    for(int i = 0; i < str.size(); i++) {
        if(isalpha(str[i])) {
            result += str[i]; 
        }
    }
    cout << "String with only alphabets: " << result << endl;
    return 0;
}
