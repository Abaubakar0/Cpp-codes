#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int balance ,d_money ,w_money ,pin ,opt;
	
	balance=100;
	
	cout<<"\t Wellcome to ATM System.";
	cout<<"\n================================";
	cout<<"\nSelect Option ";
	cout<<"\n";
	cout<<"\n1 for Check Balance.\n2 for Deposite Money.\n3 for Withdraw Money.\n4 for Change Pin. \n5 for Exit System.";
	cout<<"\n";
	cout<<"\n================================"<<endl;
	
	cout<<"Enter Option : ";
	cin>>opt;
	
	if (opt == 1){
		
		cout<<"Current Balance : "<<balance;
	}
	
	else if(opt == 2){
		
		cout<<"Deposite Money :"<<endl;
		cin>>d_money;
		balance +=d_money;
		cout<<"\nAmount is Succesfully Deposited to your Account."<<endl;
		cout<<"New Balance :"<<balance;
		
	}
	
	else{
		cout<<"error";
	}
	
	return 0;
}