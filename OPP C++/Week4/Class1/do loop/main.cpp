#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	 int n1, n2;
     int run=1;
    
    
    do{
    	if(run > 1)
    	cout<<"\nInvalid input provided! Try again.";
    	
    	 cout << "\nEnter Num 1: ";
         cin >> n1;
         cout << "\nEnter Num 2: ";
         cin >> n2;
         
		 run++;
	}while (n1 >= n2);
	
	 for (int j = n1; j <= n2; j++) {
        cout << "---------------------------------------" << endl;
        cout << "Table of " << j << endl << endl;

        for (int i = 1; i <= 10; i++) {
            cout << j << " X " << i << " = " << j * i << endl;
        }
    }

	return 0;
}