#include<iostream>
#include<cstring>

using namespace std;

template<class T>
class stack
{
    private:
        T s[10];
        int top;
    public:
        void push(T x);
        T pop();

};

template<class T>
void stack<T>::push(T x)
{
    cout<<"Pushed";
}

int main()
{
    stack<int> s;

    s.push(20);


    return 0;
}


