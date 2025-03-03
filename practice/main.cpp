#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter your num: ";
    cin>>num;
    
 if(num>3)
    {
        
         if (num>10)
        {
        cout<<"\nthe number is greater than 10 : "<<num;
        }
    
        else
       {
           cout<<"\n the number is greater than 3 but less than 10 : "<<num;
       }
    }
    else
{
    if (num>0)
    {
        cout<<"the number is greater than 0 but less than 3: "<<num;
    }
    else
    {
        cout<<"the number is even less than 0 : "<<num;
    
    }
}

int marks;
cout<<"Enter Your Marks : ";
cin>>marks;

if ( marks >= 90)
{
	cout<<"Grade A Excellent ";
}

else if( marks >= 80 )
{
		cout<<"Grade B Very Good ";
}

else if( marks >= 70 )
{
		cout<<"Grade C Very Good ";
}

else if( marks >= 60 )
{
		cout<<"Grade D Very Good ";
}

else {
	cout<<"Fail";
}











    return 0;
}