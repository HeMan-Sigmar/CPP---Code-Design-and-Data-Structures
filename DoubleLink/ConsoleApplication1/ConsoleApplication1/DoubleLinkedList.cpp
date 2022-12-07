#include "DoubleLinkedList.h"
#include <iostream>
using namespace std;

void DoubleLinkedList::AddHead(int data)
{
	Node* node = new Node;
	node->next = head;
	node->prev = nullptr;
	node->data = data;
	if (head != nullptr)
	{
		head->prev = node;
	}
	head = node;
	if (tail == nullptr)
	{
		tail = node;
	}
	count += 1;
}
void DoubleLinkedList::AddTail(int data)
{
	Node* node = new Node;
	node->prev = tail;
	node->next = nullptr;
	node->data = data;
	if (tail != nullptr)
	{
		tail->next = node;
	}
	tail = node;
	if (head == nullptr)
	{
		head = node;
	}
	count += 1;
}
void DoubleLinkedList::Add(int location, int data)
{
	int i;
	Node* newNode, * tmp;
	if (tail == nullptr)
	{
		cout << " No data found in the list!\n";
	}
	else
	{
		tmp = head;
		i = 1;
		while (i < data - 1 && tmp != nullptr)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp != nullptr)
		{
			newNode = (Node*)malloc(sizeof(Node));
			newNode->data = location;
			//next address of new node is linking with the next address of temp node            
			newNode->next = tmp->next;
			// previous address of new node is linking with the tmp node            
			newNode->prev = tmp;
			if (tmp->next != NULL)
			{
				tmp->next->prev = newNode; // n+1th node is linking with new node
			}
			tmp->next = newNode; // n-1th node is linking with new node 
		}
		else
		{
			cout << " The position you entered, is invalid.\n";
		}
	}
	count + 1;
}

void DoubleLinkedList::RemoveHead()
{
	if (head != nullptr)
	{
		Node* node = head;
		if (head->next != nullptr)
		{
			head->next->prev = nullptr;
		}
		head = head->next;
		delete node;
	}
	count -= 1;
}
void DoubleLinkedList::RemoveTail()
{
	if (tail != nullptr)
	{
		Node* node = tail;
		if (tail->prev != nullptr)
		{
			tail->prev->next = nullptr;
		}
		tail = tail->prev;
		delete node;
	}
	count -= 1;
}
void DoubleLinkedList::Remove(int value)
{
	Node* curNode;
	int i;

	curNode = head;
	for (i = 1; i < value && curNode != NULL; i++)
	{
		curNode = curNode->next;
	}

	if (value == 1)
	{
		RemoveHead();
	}
	else if (curNode == tail)
	{
		RemoveTail();
	}
	else if (curNode != NULL)
	{
		curNode->prev->next = curNode->next;
		curNode->next->prev = curNode->prev;

		free(curNode); //Deleting nth the node
	}
	else
	{
		cout << " The given position is invalid!\n";
	}
	count -= 1;
}
int DoubleLinkedList::Count()
{
	Node* temp = head;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}
bool DoubleLinkedList::IsEmpty()
{
	if (head->next == head && head->data == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
DoubleLinkedList::Node* DoubleLinkedList::GetFunc(int index)
{
	Node* output = head;
	int num = 0;
	while (num < index && output->next != nullptr)
	{
		++num;
		output = output->next;
	}
	return output;
}
void DoubleLinkedList::Display(int node)
{
	Node* tmp;
	int n = 1;
	if (head == NULL)
	{
		cout << " No data found in the List yet.";
	}
	else
	{
		tmp = head;
		if (node == 1)
		{
			cout << "\n Data entered in the list are :\n";
		}
		else
		{
			cout << "\n After insertion the new list are :\n";
		}
		while (tmp != NULL)
		{
			cout << " Node " << n << ": " << tmp->data << endl;
			n++;
			tmp = tmp->next; // current pointer moves to the next node
		}
	}
}
DoubleLinkedList:: DoubleLinkedList()
{

}
DoubleLinkedList:: ~DoubleLinkedList() 
{

}

void DoubleLinkedList::Dllcreation(int n)
{
	int i, num;
	Node* fnNode;

	if (n >= 1)
	{
		head = (Node*)malloc(sizeof(Node));

		if (head != NULL)
		{
			cout << " Input data for node 1: "; // assigning data in the first node
			cin >> num;


			head->data = num;
			head->prev = NULL;
			head->next = NULL;
			tail = head;
			for (i = 2; i <= n; i++)
			{
				fnNode = (Node*)malloc(sizeof(Node));
				if (fnNode != NULL)
				{
					cout << " Input data for node " << i << ": ";
					cin >> num;
					fnNode->data = num;
					fnNode->prev = tail;    // new node is linking with the previous node
					fnNode->next = NULL;     // set next address of fnnode is NULL
					tail->next = fnNode;   // previous node is linking with the new node
					tail = fnNode;            // assign new node as last node
				}
				else
				{
					cout << " Memory can not be allocated.";
					break;
				}
			}
		}
		else
		{
			cout << " Memory can not be allocated.";
		}
	}
}
/* Bubble sort the given linked list */
void DoubleLinkedList::BubbleSort(struct Node* start)
{
	int swapped, i;
	struct Node* ptr1;
	struct Node* lptr = NULL;

	/* Checking for empty list */
	if (start == NULL)
		return;

	do
	{
		swapped = 0;
		ptr1 = start;

		while (ptr1->next != lptr)
		{
			if (ptr1->data > ptr1->next->data)
			{
				swap(ptr1->data, ptr1->next->data);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	} while (swapped);
}