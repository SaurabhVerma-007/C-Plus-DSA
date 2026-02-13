#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isPrime = true;

    cout << "Enter a number to check if a number prime or not : ";
    cin >> num;

    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }

    return 0;
}
