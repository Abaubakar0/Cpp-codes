#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int AddNums(int,int); //function prototype or Decleration

void Greetings()

{
	cout<<"Wllcome to C++ Functions ";
	cout<<"\n==========================";
}

void change(int &R);
int main() 
{
	int n1, n2;
	
	cout<<"Enter N1 : ";
	cin>>n1;
	
	cout<<"Enter N2 : ";
	cin>>n2;
	
	
	int basket=AddNums(n1,n2);
	cout<<basket;
	
	return 0;
}

int AddNums (int X,int Y)
{
	int R = X + Y;
	cout<<"The Sum of "<<X<<"and"<<Y<<" : "<<R;
	cout<<"\nbye bye";
	return R;
	
	change(R);
	cout<<"(After change) :"<<R;
}

void change(int &R)
{
	R=R*R;
}