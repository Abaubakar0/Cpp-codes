#include <iostream>
using namespace std;

int sumOfDigitSquare(int num) {
    if (num <= 9) {
        cout << "Number must be greater than 9." << endl;
        return -1;
    }
    
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum * sum;
}

int main() {
    int number;
    
    cout << "Enter a multi-digit integer greater than 9: ";
    cin >> number;
    
    int result = sumOfDigitSquare(number);
    if (result != -1) {
        cout << "The square of the sum of the digits is: " << result << endl;
    }
    
    return 0;
}
