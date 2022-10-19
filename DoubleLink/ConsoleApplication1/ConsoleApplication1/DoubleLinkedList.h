#pragma once
class DoubleLinkedList
{
public:
	DoubleLinkedList();
	~DoubleLinkedList();

	struct Node
	{
		int data;
		Node* next;
		Node* prev;
	};
	Node* head = nullptr;
	Node* tail = nullptr;

	void AddHead(int data);
	void AddTail(int data);
	void Add(Node* location, int data);
	void RemoveHead();
	void RemoveTail();
	void Remove(Node* value);
	int Count();
	bool IsEmpty();
	Node* GetFunc(int num);
	void Display(Node* node);

private:
	int count = 0;
};

