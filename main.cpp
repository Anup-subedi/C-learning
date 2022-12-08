#include<iostream>
 
 class box{
private:
int l, b, h;

public:
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
  std::cout << "Total Surface Area:" << 2*(l*b + b*h + l*h);
}

void sum(box, box)


 };


 int main()
 {

  box box1, box2, d;

   box1.setvalues();
   box1.printtsa();

   std::cout << "Volume of box-1:";
   box1.getvolume();
   std::cout << "\n";
   

    return 0;
 }