#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	cout<<"Enter Your Name : ";
	string name;
	cin>>name;
	
	cout<<"Enter Program Name : ";
	string pname;
	cin>>pname;
	
	cout<<"\n-------------------------------------------------------------";
	
	int eng;
	cout<<"\nEnter Eng Marks : ";
	cin>>eng;
	
	int isl;
	cout<<"\nEnter isl Marks : ";
	cin>>isl;
	
	int urdu;
	cout<<"\nEnter urdu Marks : ";
	cin>>urdu;
	
	int programming;
	cout<<"\nEnter programming Marks : ";
	cin>>programming;
	
	int phy ;
	cout<<"\nEnter Phy Marks : ";
	cin>>phy;
	
	int obt_marks;
	obt_marks=eng+isl+urdu+programming+phy;
	
	cout<<"Total Marks :"<<obt_marks;
	
	cout<<"\n------------------------------------------------------------------";
	
	float total_marks;
	cout<<"\n Enter Total Marks :";
	cin>>total_marks;
	
	float percentage;
	float percentage=(obt_marks/total_marks)*100;
	
	cout<<"\n Your Percentage is : "<<percentage;
	
	cout<<"\n------------------------------------------------------------------";
	
	cout<<"\nS No           Subject                         Marks";
	cout<<"\n 1             English                         "<<eng;                                   
	cout<<"\n 2             Islamiyat                       "<<isl;
	cout<<"\n 3             Urdu                            "<<urdu;
	cout<<"\n 4             Programming                     "<<programming;
	cout<<"\n 5             Physics                         "<<phy;
	
	cout<<"\n------------------------------------------------------------------";
	

	
	float ave;
	float ave=obt_marks/5;
	cout<<"\nAverage :"<<ave;
	
	
	
	return 0;
}