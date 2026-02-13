#include<iostream>
using namespace std;

//Function to conver decimal to binary
int decToBin(int decimal){
    int ans = 0,pow = 1;

    while (decimal > 0)
    {
        int rem = decimal % 2; // gives remainder
        decimal /= 2;  // divide the number by 2

        ans += (rem * pow); // add the remainder to the answer and multiply with power of 10
        pow *= 10;
    }
    return ans;
}

int main(){

    int decimal = 50;

    for(int i=1; i<11; i++){
        cout << decToBin(i) << endl;
    }
    
    cout << decToBin(decimal) << endl;  

    return 0;  
    
}