#include<iostream>
#include<cstring>

using namespace std;

class your;
class my
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    friend void fun();
    friend your;
    
};

void fun()
{
    my t;
    t.a;
    t.b;
    t.c;

}

class your
{
    void fu()
    {
        my t;
        t.c;

        //After making friend with my, I am able to access it's private and protect data memebers as well
        t.a;
        t.b;
    }
};

int main()
{


    return 0;
}