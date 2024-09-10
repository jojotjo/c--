// write a program to print butterfly in star format
#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;
    int space = 2 * num - 1;
    int stars = 0;
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        // upper half
        if (num >= i)
        {
            space = space - 2;
            stars++;
        }

        // lower half
        else
        {
            space = space + 2;
            stars--;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            if (j != num)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
