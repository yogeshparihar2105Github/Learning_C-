#include<iostream>

using namespace std;


int ExpoSlow(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        return ExpoSlow(m, n-1) * m;
    }
}

int ExpoFast(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        return ExpoFast(m*m,n/2);
    }
    else
    {
        return m * ExpoFast(m*m,(n-1)/2);
    }
}

int main()
{
    cout<<ExpoFast(2,10);
    return 0;
}
