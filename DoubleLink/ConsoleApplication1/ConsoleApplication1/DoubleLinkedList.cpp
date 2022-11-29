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
void DoubleLinkedList::Add(Node* location, int data)
{
	//
	//if (head = nullptr)
	//{
	//	AddHead(data);
	//	return;
	//}
	//Node* next = location->next;
	//if (next == nullptr)
	//{
	//	AddTail(data);
	//	return;
	//}
	//Node* node = new Node;
	//node->data = data;
	//next->prev = node;
	//node->next = next;
	//location->next = node;
	//node->prev = location;


	// check if previous node is null
	if (location == nullptr) {
		cout << "previous node cannot be null";
		return;
	}

	// allocate memory for newNode
	Node* newNode = new Node;

	// assign data to newNode
	newNode->data = data;

	// set next of newNode to next of prev node
	newNode->next = location->next;

	// set next of prev node to newNode
	location->next = newNode;

	// set prev of newNode to the previous node
	newNode->prev = location;

	// set prev of newNode's next to newNode
	if (newNode->next != NULL)
		newNode->next->prev = newNode;
	count += 1;
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
void DoubleLinkedList::Remove(Node* value)
{
	Node* left = value->prev;
	Node* right = value->next;
	left->next = right;
	right->prev = left;
	delete value;
	count -= 1;
}
int DoubleLinkedList::Count()
{
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
//void DoubleLinkedList::Display(Node* node)
//{
//	Node* last = node;
//	while (last!= nullptr)
//	{
//		cout << last->data << "<==>";
//		last = last->next;
//	}
//	if (node == nullptr)
//		cout << "NULL";
//}
DoubleLinkedList:: DoubleLinkedList()
{

}
DoubleLinkedList:: ~DoubleLinkedList() 
{

}

//void DoubleLinkedList::Dllcreation(int n)
//{
//	int i, num;
//	Node* fnNode;
//
//	if (n >= 1)
//	{
//		head = (Node*)malloc(sizeof(Node));
//
//		if (head != NULL)
//		{
//			printf(" Input data for node 1 : "); // assigning data in the first node
//			scanf("%d", &data);
//
//			head->data = num;
//			head->prev = NULL;
//			head->next = NULL;
//			tail = head;
//			for (i = 2; i <= n; i++)
//			{
//				fnNode = (Node*)malloc(sizeof(Node));
//				if (fnNode != NULL)
//				{
//					printf(" Input data for node %d : ", i);
//					scanf("%d", &num);
//					fnNode->data = num;
//					fnNode->prev = tail;    // new node is linking with the previous node
//					fnNode->next = NULL;     // set next address of fnnode is NULL
//					tail->next = fnNode;   // previous node is linking with the new node
//					tail = fnNode;            // assign new node as last node
//				}
//				else
//				{
//					printf(" Memory can not be allocated.");
//					break;
//				}
//			}
//		}
//		else
//		{
//			printf(" Memory can not be allocated.");
//		}
	}
}