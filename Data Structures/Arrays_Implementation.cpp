#include<iostream>

using namespace std;

//This is how the array is implemented
struct Arrays_Implementation
{
    int *A;
    int size;
    int length;
};


int main()
{
    struct Arrays_Implementation A;
    A.size = 10;
    A.length = 15;

    cout<<A.size;
    return 0;
}
