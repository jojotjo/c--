// floyds triangle pattern in number format
// output
//  ****
//   ***
//    **
//     *

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the number format : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}