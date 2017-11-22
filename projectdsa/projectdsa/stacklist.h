#include<iostream>
#include<cstdlib>

using namespace std;

struct node3 {
	int info;
	struct node3 *link;
} *top;


class stacklist {

public:
	node3 *push(node3 *, int);

	node3 *pop(node3 *);

	void traverse(node3 *);

	stacklist()
	{
		top = NULL;
	}
};

node3 *stacklist::push(node3 *top, int item)
{
	node3 *tmp;
	tmp = new (struct node3);
	tmp->info = item;
	tmp->link = top;
	top = tmp;
	return top;
}

node3 *stacklist::pop(node3 *top)
{
	node3 *tmp;
	if (top == NULL)
		cout << "Stack is Empty" << endl;
	else
	{
		tmp = top;
		cout << "Element Popped: " << tmp->info << endl;
		top = top->link;
		free(tmp);
	}
	return top;
}

void stacklist::traverse(node3 *top)
{
	node3 *ptr;
	ptr = top;
	if (top == NULL)
		cout << "Stack is empty" << endl;
	else
	{
		cout << "Stack elements :" << endl;
		while (ptr != NULL)
		{
			cout << ptr->info << endl;
			ptr = ptr->link;
		}
	}
}
