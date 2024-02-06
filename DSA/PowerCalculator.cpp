#include<iostream>

using namespace std;


int PowerSlow(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        return PowerSlow(m, n-1) * m;
    }
}

int PowerFast(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        return PowerFast(m*m,n/2);
    }
    else
    {
        return m * PowerFast(m*m,(n-1)/2);
    }
}

int main()
{
    cout<<PowerFast(2,10);
    return 0;
}
