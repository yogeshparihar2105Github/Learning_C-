#include<iostream>

using namespace std;

class SumOfNnatualNum{
    public:
    int Sum(int n);
};

int SumOfNnatualNum::Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else{
        return Sum(n-1) + n;
    }
}


int main()
{
    SumOfNnatualNum SumOfNnaturalNumb;
    int n = 2;
    int ans = SumOfNnaturalNumb.Sum(n);
    cout<<ans;
    return 0;
}
