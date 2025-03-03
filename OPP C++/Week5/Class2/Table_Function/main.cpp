#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Tableprinter(int num){
	
		for(int i=1;i<=10;i++){
		cout<<num <<" X " <<i<<" = " <<num*i<<endl;
	}
	
}

int main(int argc, char** argv) {

    int a;

	cout<<"Enter a Number to print its Table : ";
	cin>>a;
	
Tableprinter(a);

	return 0;
}