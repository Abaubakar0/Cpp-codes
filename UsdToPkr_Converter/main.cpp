#include <iostream>

using namespace std;

int usdToPkr(int a, int b){
	
	return a*b;
}


int main(int argc, char** argv) {
	
	int usd,usdv;
	
	cout<<"Enter USD $ : ";
	cin>>usd;
	
	cout<<"Enter Dollar rate in pkr : ";
    cin>>usdv;
	
	int pkr= usdToPkr(usd,usdv);
	cout<<usd<<" $ in PKR : "<<pkr;
		
	
	return 0;
}










