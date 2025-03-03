#include <iostream>
//Functions in C++ 
using namespace std;

double calculation(double num1,double num2,char op){
	double result;
	if (op == '+')
	{
		result= num1 + num2 ;
		
	}
	
	else if (op == '-')
	{
		result= num2 - num1 ;
		
	}
	
	else if ( op == '*')
	{
		result= num1 * num2 ;
		
	}
	
	else if ( op == '/')
	{
		result= num1 / num2 ;
		
	}
	
	else 		cout<<"\nYour Operation is Not Valid!";
	
	cout<<"\nThe Operation is Perform Below : ";
	
	if (op== '+' || op == '*')	
		cout<<num1<<"" <<op<<num2<<"="<<result;
	else
		cout<<num2<<"" <<op<<num1<<"="<<result;
	return result;
}


int main(int argc, char** argv) {
	
	char contnue;
	do{
	double n1,n2;
	char op;
	
	
	cout<<"Enter Value For n1 : ";
	cin>>n1;
	
	cout<<"Enter Value For n2 : ";
	cin>>n2;
	
	cout<<"Which Operation You Want To Perform (+ , / , * , - ) : ";
	cin>>op;
	
	double result =  calculation(n1,n2,op);
	cout<<"\n";
	cout<<"Result is = "<<result;
	
	cout<<"\nDo you want to Calculate again (Y/N) :";
	cin>>contnue;
    }while(contnue == 'y' || contnue == 'Y');
    
    cout<<"\nGoodbye!";
	
	return 0;
}
