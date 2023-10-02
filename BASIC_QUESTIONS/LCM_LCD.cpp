#include <iostream>
using namespace std;
int main()
{
    // lcm * hcf = a*b
    // lcm=a*b/hcf
    int a, b;
    cin >> a >> b;
    for (int i = min(a, b); i >= 0; i--)
    {
        if(a==0 || b==0){
            cout<<"0";
            break;
        }
        if (a % i == 0 && b % i == 0)
        {
            cout<<(a*b)/i;
            break;
        }
       
    }
}