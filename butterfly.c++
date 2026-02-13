#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++) {

        // first half
        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }

        // spaces

        for (int j = 0; j < 2 * (n - i) - 2; j++) {
            cout << "   ";
        }

        // second half

        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }

        cout << endl;
    }

    // bottom

    for (int i = n - 1; i >= 0; i--) {

        // first half
        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }

        // spaces

        for (int j = 0; j < 2 * (n - i) - 2; j++) {
            cout << "   ";
        }

        // second half

        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }

        cout << endl;
    }

    return 0;
}
