#include <iostream>
using namespace std;

int percentage(int subA,int subB,int subC){
  
  int per;
  
  per=(subA+subB+subC)*100/300;
  return per;
}

char grade(int a){
    if (90<a){
    return ' A';}
    else if(80<a){
    return 'B';}
    else if (70<a){
    return ' C';}
    else if (60<a){
    return 'D';}
    else{
    return ' F';}
}

int main() {
    int sub1,sub2,sub3;
    
    cout << "Please enter Sub A marks : " ;
    cin >> sub1;
    
    cout << " Please enter Sub B marks : " ;
    cin >> sub2;

    cout << "Please enter Sub C marks:  " ;
    cin>>sub3;
    
    int percent=percentage(sub1,sub2,sub3);
    cout<<"Your Percentage is "<<percent ;
    
    char g = grade(percent);
    cout<<"\nYour Grade is " <<g;
    
    return 0;
}