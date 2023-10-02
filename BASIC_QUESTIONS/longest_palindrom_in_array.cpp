#include <iostream>
using namespace std;

bool palindrom_array(int num)
{
   int reversed = 0;
    int original = num;

    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}
int main()
{
    int arr[] = {1,0,0,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);
for(int i=0;i<size;i++){
if(palindrom_array(arr[i], size));
}
    
}