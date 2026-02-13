// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main()
{

  int fact = 1;
  int n;

  cout << "Enter a number to calculate its factorial: ";
  cin >> n;

  for (int i = n; i >= 1; i--)
  {
    fact *= i;    
  }
  cout << "Factorial: " << fact;

  return 0;
}