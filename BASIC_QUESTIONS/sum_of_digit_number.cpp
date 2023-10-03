#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> store;
    // int num;
    // cin >> num;
    // while (num)
    // {
    //     int last = num % 10;
    //     store.push_back(last);
    //     num = num / 10;
    // }
    // int sum = 0;
    // for (int i = 0; i < store.size(); i++)
    // {
    //     sum = sum + store[i];
    // }
    // cout << sum;
int num, sum = 0;

cout <<"Enter any num:"; cin >> num;

//loop to find sum of digits
while(num!=0){
sum += num % 10;
num = num / 10;
}

//output
cout <<"\nSum of digits : " << sum;

return 0;
}

