// floyds triangle pattern in number format
// output
//  1
//  2 3
//  4 5 6
//  7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the number format : ";
    cin >> num;
    int digit = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << digit << " ";
            digit++;
        }
        cout << endl;
    }
}