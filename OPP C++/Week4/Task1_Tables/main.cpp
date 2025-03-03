#include <iostream>  // Include this to use cout and cin
using namespace std;

int main(int argc, char** argv) {
    int n1, n2;

    cout << "Enter Num 1: ";
    cin >> n1;

    cout << "Enter Num 2: ";
    cin >> n2;

    // Ensure n1 is less than n2
    while (n1 > n2) {
        cout << "Error! Num 1 must be less than Num 2\n";
        
        cout << "Enter Num 1: ";
        cin >> n1;
        
        cout << "Enter Num 2: ";
        cin >> n2;
    }

    // Generate multiplication tables
    for (int j = n1; j <= n2; j++) {
        cout << "---------------------------------------" << endl;
        cout << "Table of " << j << endl << endl;

        for (int i = 1; i <= 10; i++) {
            cout << j << " X " << i << " = " << j * i << endl;
        }
    }

    return 0;
}
