// reverse triangle pattern in alphabet format
// output
//  A
//  B A
//  C B A
//  D C B A

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "input the patter format number : ";
    cin >> num;
    char ch='A';
    for (int i = 0; i < num; i++)
    {
        for (int j = i+ 1; j > 0; j--)
        {
            cout << ch << " ";
        }
    

        cout << endl;
    }
}