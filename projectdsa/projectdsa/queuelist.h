#include<iostream>
#include<stdlib.h>
using namespace std;
struct node2 {
	int data2;
	struct node2* next;
};

class queuelist{

private:
	node2* front = NULL;
	node2* rear = NULL;
public:
	// To Enqueue an integer
	void Enqueue(int x) {
		struct node2* temp =
			(struct node2*)malloc(sizeof(struct node2));
		temp->data2 = x;
		temp->next = NULL;
		if (front == NULL && rear == NULL){
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}

	// To Dequeue an integer.
	void Dequeue() {
		struct node2* temp = front;
		if (front == NULL) {
			cout << "Queue is Empty\n";
			return;
		}
		if (front == rear) {
			front = rear = NULL;
		}
		else {
			front = front->next;
		}
		free(temp);
	}

	int Front() {
		if (front == NULL) {
			cout << "Queue is empty\n";
			return 0;
		}
		return front->data2;
	}

	void Print() {
		struct node2* temp = front;
		while (temp != NULL) {
			cout << temp->data2 << " ";
			temp = temp->next;
		}
		cout << "\n";
	}

};