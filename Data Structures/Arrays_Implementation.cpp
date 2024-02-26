#include<iostream>

using namespace std;

//This is how the array is implemented
//Fill it with all the method that should be inside an array
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
