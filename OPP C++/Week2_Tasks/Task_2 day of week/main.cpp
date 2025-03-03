#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int start_day,day_of_year,day_of_week;
	int sun,mon,tue,wed,thu,fri,sat;

	cout<<"Enter a number in range of 0 to 6, 0 = Sunday , 1=Monaday ......... 6=Saturaday : " ;
	cin>>start_day;
	
		if(start_day<0 || start_day>6) {
	    		cout<<"\nError! Enter a number in range of 0 to 6";
	}
	
	cout<<"\nEnter a number in the range of 1 to 366 : ";
	cin>>day_of_year;
	
	if(day_of_year<1 || day_of_year>366){
		cout<<"\nError! Enter a number in range of 1 to 366";
		
	}
	
    sun=0;
	mon=1;
	tue=2;
	wed=3;
	thu=4;
	fri=5;
	sat=6;
	
	day_of_week=(start_day + day_of_year - 1) % 7;
	cout<<"day of week :"<<day_of_week;
	
	return 0;
}