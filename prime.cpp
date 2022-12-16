#include <iostream>
using namespace std;

int main()
{
    int i, n, count=0;
    cout << "Enter any positive number: ";
    cin >> n;
    
    if (n==1 || n=0)
        cout << n <<" is neither composite nor prime";
    if (n==2)
        cout << n <<" is prime";
    
   for(i=1; i<=n/2; i++)
   {
       if (n%i==0)
       {count++;}
       
       if (count==2) 
       {break;}
   }
    
    cout << i << "- times the iterations are done"; //checking the number of iterations
 if (count==1)
 { 
     cout << n << "is prime number";
 }   
    else
 {
        cout << n << "is a composite number";
 }
    
return 0;
}
