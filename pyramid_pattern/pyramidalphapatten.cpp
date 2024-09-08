// floyds triangle pattern in alphabet format
// output
//     1
//   1 2 1
// 1 2 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the number format : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        char ch = 'A';
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << ch;
            ch++;
        }

        ch-=2;
        for (char j =0; j < i; j++)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}