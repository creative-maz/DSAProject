#include<iostream>
using namespace std;

struct node4  {
	int data4;
	struct node4* next4;
	struct node4* prev;
};

class doubly{

private:

	struct node4* head;

public:

	doubly(){
		head = NULL;
	}

	struct node4* GetNewnode4(int x) {
		node4* newnode4 = new node4;
		newnode4->data4 = x;
		newnode4->prev = NULL;
		newnode4->next4 = NULL;
		return newnode4;
	}

	void InsertAtHead(int x) {
		struct node4* newnode4 = GetNewnode4(x);
		if (head == NULL) {
			head = newnode4;
			return;
		}
		head->prev = newnode4;
		newnode4->next4 = head;
		head = newnode4;
	}

	void InsertAtTail(int x) {
		struct node4* temp = head;
		struct node4* newnode4 = GetNewnode4(x);
		if (head == NULL) {
			head = newnode4;
			return;
		}
		while (temp->next4 != NULL) temp = temp->next4;
		temp->next4 = newnode4;
		newnode4->prev = temp;
	}

	void Print() {
		struct node4* temp = head;
		cout << "Forward: ";
		while (temp != NULL) {
			cout << temp->data4 << " ";
			temp = temp->next4;
		}
		cout << "\n";
	}

	void ReversePrint() {
		struct node4* temp = head;
		if (temp == NULL) return;

		while (temp->next4 != NULL) {
			temp = temp->next4;
		}

		cout << "Reverse: ";
		while (temp != NULL) {
			cout << temp->data4 << " ";
			temp = temp->prev;
		}
		cout << "\n";
	}
};