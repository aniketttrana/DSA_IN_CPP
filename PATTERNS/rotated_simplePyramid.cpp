#include <iostream>
using namespace std;

//         *
//       * *
//     * * *
//   * * * *
int main()
{
    int row;
    cin >> row;
    int spaces = row - 1;
    for (int i = 0; i < row; i++)
    {

        for (int z = 0; z < row - i; z++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
}
