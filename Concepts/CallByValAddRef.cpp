#include<iostream>
#include<cstring>

using namespace std;

//CALL BY VALUE => NOT SWAP THE ACTUAL PARAMETER
// void swap(int a, int b)
// {
//     int temp = a;
//     a=b;
//     b=temp;

//     cout<<"a:"<<a<<" "<<"b:"<<b<<endl;
// }

// int main()
// {
//     int x = 10, y = 20;

//     swap(x,y);

//     cout<<"x:"<<x<<" "<<"y:"<<y;

// }

//CALL BY ADDRESS => SWAP THE ACTUAL PARAMETER
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a=*b;
//     *b=temp;

//     cout<<"a:"<<*a<<" "<<"b:"<<*b<<endl;
// }

// int main()
// {
//     int x = 10, y = 20;

//     swap(&x,&y);

//     cout<<"x:"<<x<<" "<<"y:"<<y;

// }

//CALL BY VALUE => NOT SWAP THE ACTUAL PARAMETER
void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;

    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;
}

int main()
{
    int x = 10, y = 20;

    swap(x,y);

    cout<<"x:"<<x<<" "<<"y:"<<y;

}