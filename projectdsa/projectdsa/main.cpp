#include <iostream>
using namespace std;
#include "bubbleSort.h"
#include "selectiveSort.h"
#include "insertionSort.h"
#include "stack.h"
#include "queue.h"
#include "singlelinkedlist.h"
#include "queuelist.h"
#include "stacklist.h"
#include "doubly.h"

//menu program 
void menu(){
	int a;
	cout << "|**********************************|\n";
	cout << "\tPRESS 1 FOR BUBBLE SORT\n";
	cout << "\tPRESS 2 FOR SELECTIVE SORT\n";
	cout << "\tPRESS 3 FOR INSERTION SORT\n";
	cout << "\tPRESS 4 FOR STACK \n";
	cout << "\tPRESS 5 FOR QUEUE \n";
	cout << "\tPRESS 6 FOR SINGLE LINKED LIST \n";
	cout << "\tPRESS 7 FOR QUEUE AS LINKED LIST \n";
	cout << "\tPRESS 8 FOR STACK AS LINKED LIST \n";
	cout << "\tPRESS 9 FOR DOUBLE LINKED LIST \n";
	cout << "|**********************************|\n";
	cin >> a;
	//switch statement
	switch (a){
	case 1:
		bubbleSort();
		break;//case 1
	case 2:
		selection();
		break;//case 2
	case 3:
		insertion();
		break;//case 3
	case 4:
	{	Stack S;
		S.Push(2);
		S.Print();
		S.Push(5);
		S.Print();
		S.Push(10);
		S.Print();
		S.Pop();
		S.Print();
		S.Push(12);
		S.Print();
		break;//case 4
	}//case 4 end

	case 5:
	{
		Queue Q; 
		Q.Enqueue(2);  
		Q.Print();
		Q.Enqueue(4);  
		Q.Print();
		Q.Enqueue(6);  
		Q.Print();
		Q.Dequeue();	  
		Q.Print();
		Q.Enqueue(8);  
		Q.Print();
		break;
	}//case 5 end

	case 6:
	{
		list obj;
	    obj.createnode1(25);
		obj.createnode1(50);
		obj.createnode1(90);
		obj.createnode1(40);
		cout << "\n--------------------------------------------------\n";
		cout << "---------------Displaying All node1s---------------";
		cout << "\n--------------------------------------------------\n";
		obj.display();
		cout << "\n--------------------------------------------------\n";
		cout << "-----------------Inserting-----------------";
		cout << "\n--------------------------------------------------\n";
		obj.createnode1(55);
		obj.display();
		cout << "\n--------------------------------------------------\n";
		cout << "-----------------Deleing-------------------";
		cout << "\n--------------------------------------------------\n";
		obj.delete_last();
		obj.display();
		cout << "\n--------------------------------------------------\n";
		break;
	}

	case 7:
	{
		queuelist ql;
		ql.Enqueue(2);
		ql.Print();
		ql.Enqueue(4);
		ql.Print();
		ql.Enqueue(6);
		ql.Print();
		ql.Dequeue();
		ql.Print();
		ql.Enqueue(8);
		ql.Print();
	}

	case 8:
	{
		int choice, item;
		stacklist sl;

		cout << "Operations on Stack" << endl;
		cout << "\n-------------" << endl;
		cout << "1.Push Element into the Stack" << endl;
		cout << "2.Pop Element from the Stack" << endl;
		cout << "3.Traverse the Stack" << endl;
		cout << "4.Quit" << endl;
		while (1)
		{
			cout << "\nEnter your Choice: ";
			cin >> choice;
			switch (choice)
			{
				case 1:
					cout << "Enter value to be pushed into the stack: ";
					cin >> item;
					top = sl.push(top, item);
					break;
				case 2:
					top = sl.pop(top);
					break;
				case 3:
					sl.traverse(top);
					break;
				case 4:
					exit(1);
				default:
					cout << "Wrong Choice" << endl;
				  }
			  }
		break;
	}//case 8 end

	case 9:
	{
		doubly d;
		d.InsertAtTail(2); d.Print(); d.ReversePrint();
		d.InsertAtTail(4); d.Print(); d.ReversePrint();
		d.InsertAtHead(6); d.Print(); d.ReversePrint();
		d.InsertAtTail(8); d.Print(); d.ReversePrint();
		break;
	}//case 9 end

	}//switch end
}

int main(){
	menu();
	cout << "\n";
	system("PAUSE");
}