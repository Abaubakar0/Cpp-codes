#include <iostream>
#include <ctime>  

using namespace std;

int main() {
    int gnum, random_number, tries = 0;
    
    srand(time(0));
    random_number = rand() % 100;
    cout<<random_number<<endl;
    cout << "Welcome to the Guess Number Game!" << endl;
    cout << "Guess a number between (1 to 100)" << endl;
    cout<<"\n You have 10 Turns."<<endl;
    cout << "===================================" << endl;

    while (tries < 10) { 
        cout << "\nGuess what the number is: ";
        cin >> gnum;
        tries++;

        if (gnum > random_number) {
            cout << "Too high! Try again." << endl;
        } else if (gnum < random_number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout<<"You Guess a number in "<<tries<<" Turns.";
            return 0; 
        }
    }
	
    cout << "\nYou Lost The Game!!! The correct number was: " << random_number << endl;
    cout << "Try Again!" << endl;
    
    return 0;
}