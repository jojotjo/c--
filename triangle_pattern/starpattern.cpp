// triangle pattern in star format
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "input the pattern format number : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}