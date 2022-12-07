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
	void Add(int location, int data);
	void RemoveHead();
	void RemoveTail();
	void Remove(int value);
	int Count();
	bool IsEmpty();
	Node* GetFunc(int num);
	void Display(int node);
	void Dllcreation(int n);
	void BubbleSort(Node* start);

private:
	int count = 0;
};

