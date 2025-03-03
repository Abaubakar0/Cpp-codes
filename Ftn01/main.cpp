#include <iostream>
#include <string>

using namespace std;

//Function 1 for square 
int square(int num){
	
	num*=num;
	return num; //OR return num *num
}

//Function 2 for check square is odd or even 
string checkoddeven(int number){
	
	if (number % 2 == 0){
		return"Even";
	}
	else{
		    return "Odd";
	     }
	}


int main(int argc, char** argv) {
	
	int num;
	
	cout<<"Enter a Number : ";
	cin>>num;
	
	int result= square(num);
	cout<<"Square of "<<num<<" is "<<result;
	
	string result2= checkoddeven(result) ;
	cout<<"\nSqure is " <<result2;
	
	return 0;
}