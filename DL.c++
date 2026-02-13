#include <iostream>

using namespace std;

int main(){
    int age;

    cout << "Enter your age : ";
    cin >> age;

    if (age >= 18){
        cout << "You are eligible for voting.";
    }
    else{
        cout << "Sorry, you are not eligible for voting yet.";
    }
    return 0;
}