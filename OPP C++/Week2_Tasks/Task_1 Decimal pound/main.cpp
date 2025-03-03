#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 

{
	int pounds,shillings,pence;
	double DecimalPound;
	
	
	cout<<"Enter Pounds : ";
	cin>>pounds;
	
	cout<<"Enter Shillings : ";
	cin>>shillings;
	
	cout<<"Enter Pence : ";
	cin>>pence;
	
	DecimalPound = pounds + (shillings/20.0) + (pence/240.0);
	
	cout<<"Decimal pounds = "<<DecimalPound ;
	
	return 0;
}