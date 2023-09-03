#include <iostream>
using namespace std;
// STRINGS
// here we cant access the delimeter
// what is npos
int main()
{
    string a = "my nname is aniket";
    string target = "name";
    cout << a.find(target) << endl;
    a.erase(0, 7);
    cout << a;
}