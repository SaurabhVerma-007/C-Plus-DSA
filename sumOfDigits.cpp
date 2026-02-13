#include <iostream>
using namespace std;

// Sum of digits
int sumOfDigits(int n){
    int digitSum = 0;
    while (n > 0){
        int lastDig = n%10;
        n /= 10;
        digitSum += lastDig;        
    }
    return digitSum;
}
int main()
{
    cout << sumOfDigits(1234) << endl;

    return 0;
}