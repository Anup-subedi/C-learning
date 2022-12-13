#include<iostream>
//using namespace std;

//Note: I used std::cin and std::cout to fix the vs studio code issue with syntax.
 
//This is class which contains volume and surface area.
class box{ 
 
 private: //these variables can't be accesssed by any objects 
 int l, b, h; //variables declaration

  
 public: //this function can be accessed by all the objects.
 void setvalues()
{
    std::cout<< "Enter Dimensions(Length|Breadth|Height)\n"; //asking value to the user
    std::cin >> l >> b >> h;

}
int getvolume() //it returns the volume by taking dimensions input from the user.
{
  return l*b*h;  
}
void printtsa() //it directly prints Total surface area when it is called in the main function.
{
  std::cout << "Total Surface Area:" << 2*(l*b + b*h + l*h);
}
 };


 int main()
 {

  box box1, box2; //declaring objects of the class box.

    //calling the functions
   box1.setvalues(); 
   box1.printtsa();

 //printing the returned value by getvolume() function
   std::cout << "Volume of box-1:";
   box1.getvolume();
   std::cout << "\n";
   

    return 0;
 }
