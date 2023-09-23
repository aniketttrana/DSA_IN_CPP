/*
Array is a single  block of memory with partition
Array has fixed memory
It require contiguous block of memory
inserting or deleting is costly
// like we have to traverse the whole array

Linked list is multiple blocks of memory linked to each other
Size can be modified
Non-contiguous memory
Insertion and deletion at any point is easier



Node is a block of memory that has data and next pointer (that store address of the next node)


// In practice 
head pointer stores the address of the first Node of the linked list
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    // Now you have created a linked list node with data 10 and a NULL next pointer.
    Node *second = new Node(20);
    // Node *third = new Node(30);
    // i am not linking third

    // We have to link it
    head->next = second;
    // You can access the data and next pointer as follows:
    cout << "Data: " << head->data << endl;
    cout << "Next: " << head->next << endl;
    // How to access the secondnode
    cout << head->next->data << endl;
    // Or
    cout << second->data << endl;
    // Accessing the next value of second
    cout << head->next->next << endl;
    // or
    cout << second->next << endl;
    delete head; // Don't forget to delete dynamically allocated memory when done.
    return 0;
}
