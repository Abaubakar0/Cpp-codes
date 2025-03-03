#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int Lr,Ur;
	bool isPrime;
	
	cout<<"Enter Lower Range  : ";
	cin>>Lr;
	cout<<"Enter Upper Range : ";
	cin>>Ur;
	
	do
	{
	
     cout<<"\nEnter Lower Range  : ";
	 cin>>Lr;
	 cout<<"\nEnter Upper Range : ";
	 cin>>Ur;
	 
	}while(Lr>= Ur);
	
    cout<<"Lower Range :"<<Lr;
	cout<<"Upper Range :";
	
	for(int n =Lr ; n <= Ur; n++)
	{
		isPrime=true;
		for (int d=2; d<n;d++)
		if(n%2 ==0)
		{
			isPrime=false;
			break;
		}
		if(isPrime)
		{
			cout<<n<<"  ";
	}

// Division LOop for single prime
 
//int n; 
//cout<<"Enter a Number : ";
//cin>>n;
//
//bool isPrime=true;
//for (int d=2; d<n;d++)
//{
//	if(n%d ==0)
//	{
//		isPrime = true;
//		break;
//	}
//}
//if (isPrime)
//{
//	cout<<n<<" is Prime!";
//	
//}
//else{
//	cout<<n<<"is not Prime!";
//}
//
//	return 0;
//}