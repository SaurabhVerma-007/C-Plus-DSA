#include <iostream>
#include <vector>
using namespace std;    

int main() {
    vector<int> vec;

    vec.push_back(1); //insert
    vec.push_back(2);
    vec.push_back(3); 

    cout << "vector size : " <<vec.size() << endl;
    cout << "vector capacity : " << vec.capacity() << endl;

    vec.pop_back(); //delete

    cout << "vector size after pop: " << vec.size() << endl;
    cout << "vector capacity after pop: " << vec.capacity() << endl;

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    cout << "vector size after push: " << vec.size() << endl;
    cout << "vector capacity after push: " << vec.capacity() << endl;

    for(int val : vec){
        cout << val << endl;
    }
    return 0;  
}