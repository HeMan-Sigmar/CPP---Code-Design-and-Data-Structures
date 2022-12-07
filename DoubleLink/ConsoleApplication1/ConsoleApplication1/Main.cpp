#pragma once
#include "DoubleLinkedList.h"
#include <iostream>
#include <list>
using namespace std;
int main(void)
{
    DoubleLinkedList dll;
    int n, num1, a, locat, insPlc;
    dll.head = nullptr;
    dll.tail = nullptr;



    cout << " Enter the number of nodes : ";
    cin >> n;
    dll.Dllcreation(n);
    a = 1;
    dll.Display(a);
    ///////////////////////////////////////////////////
    cout << " Input the position to insert a new node : ";
    cin >> insPlc;
    if (insPlc <= 1 || insPlc >= n)
    {
        cout << "\n Invalid position\n ";
    }
    if (insPlc > 1 && insPlc < n)
    {
        cout << " Input data for the position " << insPlc << " : ";
        cin >> num1;
        dll.Add(num1, insPlc);
        a = 2;
        dll.Display(a);
    }

    ///////////////////////////////////////////////////
    cout << " Input data for the first node : ";
    cin >> num1;
    dll.AddHead(num1);
    a = 2;
    dll.Display(a);
    ///////////////////////////////////////////////////
    cout << " Input data for the last node : ";
    cin >> num1;
    dll.AddTail(num1);
    a = 2;
    dll.Display(a);
    ///////////////////////////////////////////////////
    cout << " Enter the position  to delete a node : ";
    cin >> insPlc;
    if (insPlc<1 || insPlc>n)
    {
        cout << "\n Invalid position. Try again.\n ";
    }
    if (insPlc >= 1 && insPlc <= n)
    {

        dll.Remove(insPlc);
        a = 2;
        dll.Display(a);
    }
    cout << " Removing the first node from the list : ";
    dll.RemoveHead();
    a = 2;
    dll.Display(a);
    cout << " Removing the last node from the list : ";
    dll.RemoveTail();
    a = 2;
    dll.Display(a);
    
    /////////////////////////////////////////////////////
    if (dll.IsEmpty()) cout << "List is Empty" << endl;
    else {
        cout << "List is not empty! List contains:" << "\n";
        dll.Display(a);
    }
    /////////////////////////////////////////////////////
    cout << " Sorting linked list using bubble sort: ";
    dll.BubbleSort(dll.head);
        for (int i = 0; i < dll.Count(); i++)
        {
            std::cout << dll.GetFunc(i)->data << std::endl;
        }
        //number of nodes in the list
        cout << "No. of nodes: " << dll.Count() << "\n";
    return 0;
}
