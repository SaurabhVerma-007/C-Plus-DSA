#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int m = 4;

    for (int i = 0; i < n; i++)
    {
        // Upper half
        for (int j = 0; j <= i; j++)
        // first half
        {
            cout << '*';
        }
        // spaces
        for (int j = 2; j < 2 * (n-i); j++)
        {
            cout << ' ';
        }
        // second half
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }        
        cout << endl;
    }
    // Lower half
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        // first half
        {
            cout << '*';
        }
        // spaces
        for (int j = 2; j < 2 * (n-i); j++)
        {
            cout << ' ';
        }
        // second half
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }        
        cout << endl;
    }

    return 0;
}