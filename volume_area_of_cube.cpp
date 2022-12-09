#include<iostream>
//using namespace std;
 
 class box{

int l, b, h;

void setvalues()
{
    std::cout<< "Enter Dimensions(Length|Breadth|Height)\n";
    std::cin >> l >> b >> h;

}
int getvolume()
{
  return l*b*h;  
}
void printtsa()
{
  cout << "Total Surface Area:" << 2*(l*b + b*h + l*h);
}
 };
 
 d(box c, box d)

 int main()
 {

  box box1, box2;

   box1.setvalues();
   box1.printtsa();


   std::cout << "Volume of box-1:";
}   box1.getvolume();
   std::cout << "\n";
   

    return 0;
 }