#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[20] = "Good";
    char s2[10] = "";

    strcpy(s2, s1);

    cout<<"The content of s1 copied to s2 : "<<s2<<endl;

    char s3[10] = "";

    strcpy(s1, s3);
    cout<<"The content of s3 copied to s1 : "<<s1<<endl;

    cout<<"strcpy will override the existing thing in the source with the destination";
    return 0;
}