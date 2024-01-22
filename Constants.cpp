#include<iostream>
using namespace std;
    
int main()
{
    int x = 10;
    x++;

    const int y = 11;
    //y++;       //you can't change the value of constant
    const int *ptr = &y;
    // ++*ptr;  //you can't change the value of pointer and y

    
    int z = 11;
    int* const ptr1 = &z;
    // ptr1 = &x;  //you can;t change the pointer it is pointing to

	return 0;
}