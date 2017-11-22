#include <iostream>
using namespace std;
#define MAX_SIZE 101

class Stack
{
private:
	int A[MAX_SIZE]; 
	int top;   
public:
	
	Stack()
	{
		top = -1; 
	}

	
	void Push(int x)
	{
		if (top == MAX_SIZE - 1) { 
			cout << "Stack is Full\n";
			return;
		}
		A[++top] = x;
	}

	
	void Pop()
	{
		if (top == -1) {
			cout << "Stack is Empty\n";
			return;
		}
		top--;
	}

	
	int Top()
	{
		return A[top];
	}

	
	int IsEmpty()
	{
		if (top == -1) return 1;
		return 0;
	}

	void Print() {
		int i;
		cout << "Stack: ";
		for (i = 0; i <= top; i++)
			cout << A[i] << " ";
		cout << "\n";
	}
};