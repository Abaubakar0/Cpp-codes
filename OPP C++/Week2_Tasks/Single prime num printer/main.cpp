#include <iostream>
using namespace std;
int main() {
  // Division LOop for single prime
 
int n; 
cout<<"Enter a Number : ";
cin>>n;

bool isPrime=true;

for (int d=2; d<n;d++)
{
  if(n%d ==0)
    {
        isPrime = false;
        break;
    }
}
if (isPrime)
{
    cout<<n<<" is Prime Number!";
    
}
else{
    cout<<n<<"is not Prime Number!";
}

    return 0;
}