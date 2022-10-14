#include "DoubleLinkedList.h"
#include <iostream>
using namespace std;

void DoubleLinkedList::AddHead(int data)
{
	Node* node = new Node;
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
	
	if (head = nullptr)
	{
		AddHead(data);
		return;
	}
	Node* next = location->next;
	if (next == nullptr)
	{
		AddTail(data);
		return;
	}
	Node* node = new Node;
	node->data = data;
	next->prev = node;
	node->next = next;
	location->next = node;
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
	return head == nullptr;
}
DoubleLinkedList::Node* DoubleLinkedList::GetFunc(int num)
{

}