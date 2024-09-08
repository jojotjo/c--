// reverse triangle pattern in number format

// output
//  1
//  2 1
//  3 2 1
//  4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the patten format number : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (char j = 'A' + i; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}