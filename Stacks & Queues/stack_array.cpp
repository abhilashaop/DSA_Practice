// 296 Implementing stack using arrays
#include <bits/stdc++.h>

using namespace std;


class Stack {
	int top;

public:
	int a[1009];

	Stack() 
	{ top = -1;}

bool push(int x)
{
	if (top >= 999) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool isEmpty()
{
	return (top < 0);
}
};
int main()
{	
	class Stack s;
	for(int i=0;i<11;i++)
	s.push(i*2);
	cout << s.pop() << " Popped from stack\n";
	cout<<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		cout<<s.peek()<<" ";
		s.pop();
	}

	return 0;
}

