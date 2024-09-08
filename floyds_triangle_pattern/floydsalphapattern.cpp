// floyds triangle pattern in alphabet format
// output
//  A
//  B C
//  D E F
//  G H I J

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the number format: ";

    cin >> num;
    char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}