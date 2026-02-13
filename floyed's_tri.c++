#include <iostream>
using namespace std;
int main()
{
    int row = 4;
    int num = 1;

    for (int i=0; i<row; i++) {
        for (int j=i+1; j>0; j--) {
            cout << num << " ";
            num++;
        }
        cout << endl;      
    }
    
    return 0;
}
