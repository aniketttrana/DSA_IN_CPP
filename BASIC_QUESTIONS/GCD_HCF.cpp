#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = max(a, b); i >= 1; i--)
    {
        if(a==0 || b==0){
            cout<<"0";
            break;
        }
        if (a % i == 0 && b % i == 0)
        {
            cout << "Hcf of" << a << "and " << b << " "
                 << "is " << i;
            break;
        }
        else
        {
            cout << "1";
            break;
        }
    }
}