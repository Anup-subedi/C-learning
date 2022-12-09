// program to check whether the number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    cout<<"\n-----------program to check whether the number is prime or not-----------\n\n";
    do{
       system("cls");
    int count=0, n,i; //declaring variables
    cout<<"Enter a number:";
    cin>>n; //takes the input

    if (n==1 || n==0) //checking condition for 1 and 0 as they don't belong to prime or composite.
    {cout<< n << " is neither prime nor composite.\n";}

    else
  {
   for (i=1; i<=n; i++) //itirating upto n/2. Since, if the number is not devisible until its half then it isn't devisible. 
    {
      
      if (n%i==0)
      {count++;} 

      if (count>2) //if it gets satisfied, the loop breaks.
      {break;}
    }

 
   if (count==2)
   {
   cout<< n << " is a prime number!\n";}
   else
   cout<< n << " is a composite number!\n";
  }
 cout << "\nDo you want to continue? (y/n): \n";
    } while (getchar() == 121);
    cout << "\nBye\n";
    system("pause");
    return 0;
}