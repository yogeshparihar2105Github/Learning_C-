# include<iostream>
using namespace std;
    
//This stack class can store any datatype(int, float, char, string, bool)
template<class t>
class stack
{
private:
	t *stk;
    	int top;
    	int size;
public:
	stack(int z)
    	{
        	size=sz;
		top=-1;
		stk=new int[size];
       	}
	void push(t x);
	t pop();
};
template<class t>
void stack<t>::push(t x)
{
	if(top==size-1)
		cout<<"stack is full";
	else
	{
		top++;
	      	stk[top]=x;
	}
}
template<class t>
t stack<t>::pop()
{
	t x=0;
	if(top==-1)
		cout<<"stack is empty"<<endl;
	else
	{
		x=stk[top];
		top--;
	}
	return x;
}
int main()
{
	stack<int> s(10);
	s.push(10);
	s.push(23);
	s.push(33);
}