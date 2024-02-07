#include<iostream>

using namespace std;

int F[200];

long Fib_Slow(int n)
{
    if(n < 2)
    {
        return n;
    }
    return Fib_Slow(n-2) + Fib_Slow(n-1);
}

long Fib_Fast(int n)
{
    if(n < 2)
    {   
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
        {
            F[n-2] = Fib_Fast(n-2);
        }
        if(F[n-1] == -1)
        {
            F[n-1] = Fib_Fast(n-1);
        }

        F[n] = F[n-2] + F[n-1];
        return Fib_Fast(n-2) + Fib_Fast(n-1);
    }
}

int main()
{
    //Filling the array with -1 one bcs we don't know the value yet
    for(int i = 0; i < 200; i++)
    {
        F[i] = -1;
    }
    cout<<Fib_Fast(50);
    return 0;
}
