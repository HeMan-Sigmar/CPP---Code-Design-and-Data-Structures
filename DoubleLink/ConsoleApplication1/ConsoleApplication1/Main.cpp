#pragma once
#include "DoubleLinkedList.h"
#include <iostream>
int main(void)
{
    DoubleLinkedList dll;
    int n, num1, a, locat;
    dll.head = nullptr;
    dll.tail = nullptr;
    printf("\n\n Doubly Linked List : Insert new node at any position in a doubly linked list :\n");
    printf("-----------------------------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
   
    dll.AddHead(89);
    dll.AddHead(34);
    dll.AddHead(73);
    dll.AddTail(87);
    dll.AddTail(23);
    dll.AddTail(51);
    dll.Remove(dll.GetFunc(1));
    dll.Add(dll.GetFunc(3), 40);
    dll.Remove(dll.GetFunc(4));
    dll.RemoveHead();
    dll.RemoveTail();

    if (dll.IsEmpty())
    {
        std::cout << "The list is empty!\n";
    }
    else {
        std::cout << "Doubly linked list is as follows: " << std::endl;
        for (int i = 0; i < dll.Count(); i++)
        {
            std::cout << dll.GetFunc(i)->data << std::endl;
        }
    }
    return 0;
}
