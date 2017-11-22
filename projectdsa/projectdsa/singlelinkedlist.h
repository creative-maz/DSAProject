#include<iostream>
using namespace std;
struct node1
{
	int data1;
	node1 *next1;
};
class list
{
private:
	node1 *head, *tail;
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}
	void createnode1(int value)
	{
		node1 *temp = new node1;
		temp->data1 = value;
		temp->next1 = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next1 = temp;
			tail = temp;
		}
	}
	void display()
	{
		node1 *temp = new node1;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data1 << "\t";
			temp = temp->next1;
		}
	}

	void delete_last()
	{
		node1 *current = new node1;
		node1 *previous = new node1;
		current = head;
		while (current->next1 != NULL)
		{
			previous = current;
			current = current->next1;
		}
		tail = previous;
		previous->next1 = NULL;
		delete current;
	}
};