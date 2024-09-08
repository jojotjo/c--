// inverted triangle pattern in number format
// output
//  1111
//   222
//    33
//     4

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the number format: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<" ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}