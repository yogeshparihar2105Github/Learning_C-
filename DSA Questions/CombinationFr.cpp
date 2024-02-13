#include<iostream>

using namespace std;

//program to calculate nCr using Recursion by pascal's Triangle
long Combi(int n, int r)
{
    if(r == 0 || n == r)
    {
        return 1;
    }
    return Combi(n-1,r-1) + Combi(n-1,r);
}

int main()
{
    cout<<Combi(4,2);
    return 0;
}
