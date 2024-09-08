// floyds triangle pattern in number format
// output
//  AAAA
//   BBB
//    CC
//     D

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the number format : ";
    cin >> num;
    char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}