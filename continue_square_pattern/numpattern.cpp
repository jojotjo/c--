// square pattern with number in continue format
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "input the number pattern : ";
    cin >> num;
    int digit = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << digit << " ";
            digit++;
        }
        cout << endl;
    }
}