#include<iostream>

using namespace std;

//program to calculate nCr using Recursion by pascal's Triangle
void TowerOfHanoi(int n, int a, int b, int c)
{
    if(n == 0)
    {
        return;
    }
    TowerOfHanoi(n-1, a, c, b); 
    cout<<"Go from "<<a<<" to "<<c<<endl;
    TowerOfHanoi(n-1,b,a,c);
}

int main()
{
    TowerOfHanoi(3,1,2,3);
    return 0;
}
