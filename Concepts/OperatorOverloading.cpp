#include<iostream>
#include<cstring>

using namespace std;

class Complex
{
   public:
    int img;
    int real;

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;

        return temp;
    }
    
};

int main()
{
   Complex c1;
   c1.img = 10;
   c1.real = 20;

   Complex c2;
   c2.img = 15;
   c2.real = 25;

   Complex c3 = c1 + c2;       //overloaded + operator 

   cout<<c3.real<<" "<<c3.img<<"i"<<endl;

}