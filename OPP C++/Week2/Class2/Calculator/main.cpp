#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int n1,n2;
	int result;
	char op;
	
	cout<<"Enter Value For n1 : ";
	cin>>n1;
	
	cout<<"Enter Value For n2 : ";
	cin>>n2;
	
	cout<<"Which Operation You Want To Perform (+ , / , * , - ) : ";
	cin>>op;
	
	if (op == '+')
	{
		result= n1 + n2 ;
	}
	
	else if (op == '-')
	{
		result= n2 - n1 ;
	}
	
	else if ( op == '*')
	{
		result= n1 * n2 ;
	}
	
	else if ( op == '/')
	{
		result= n1 / n2 ;
	}
	
	else 		cout<<"\nYour Operation is Not Valid!";
	
	cout<<"\nThe Operation is Perform Below : ";
	if (op== '+' || op == '*')	
		cout<<n1<<"" <<op<<n2<<"="<<result;
	else
		cout<<n2<<"" <<op<<n1<<"="<<result;

//char ch;
//
//cout<<"CH\t code";
//
//for(int i=0 ; i<=255 ; i++)
//{
//	ch=i;
//	cout<<ch<<"\t"<<i<<"\n";
//}
//cout<<"CH = "<<ch;
		
	return 0;
}