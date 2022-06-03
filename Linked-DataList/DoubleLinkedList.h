#pragma once
class DoubleLinkedList
{
	class node
	{
	public:
		int data;

		struct node* next;
		struct node* previous;
	private:
		node* heads;
		node* tails;
	public:
		DoubleLinkedList();
		~DoubleLinkedList();

	};

};

MyClass::DoubleLinkedList()
{
}

MyClass::~DoubleLinkedList()
{
}