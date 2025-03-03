#include <iostream>
#include <string>
using namespace std;
	
void printPattern(int a) {
	
	cout<<"\nPattern A"<<endl;
    for (int i = 1; i <= a; i++) {
        cout << string(i, '+') << endl;
    }
    	 
	cout<<"\nPattern B"<<endl;
     for (int j = a; j >= 1; j--) {
        cout << string(j, '+') << endl;
    }
    

}

int main()
{
    int pattern1;
    
    cout<<"Enter the number of plus you want to print : ";
    cin>>pattern1;
    
    printPattern(pattern1);
    
    
    return 0;
}