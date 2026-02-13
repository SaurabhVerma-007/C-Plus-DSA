#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n-i; j++)
        {
            cout << ' ';
        }

        // first half
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1;
        }
        // second half
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }   
        cout << endl;
    }

    return 0;
}