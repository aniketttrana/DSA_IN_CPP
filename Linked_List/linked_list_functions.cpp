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

void insertAtTail(Node *&head, int val)
{
    // first we create (n) node
    Node *n = new Node(val);
    // its data field is val and next field is NULL

    // agar head he NULL hai to (means 0 node in linked list)
    if (head == NULL)
    {
        head = n;
        // head ko n bna do
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        // aage badhate jao(end tak jao)
        // agar null nahe mila to ek step aage chle jao
        // value daalne ke liye
        temp = temp->next;
    }
    // last mil gya ab  isko (n) node bna do
    // n node value daal dega isme ab
    temp->next = n;
}

void insertAtHead(Node *&head, int val)
{
    // we simply make a node and
    // point it to the current node of linked list
    // head to change krke first me leaaenge
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    // insertAtTail(head, 10);
    // insertAtTail(head, 20);
    // insertAtTail(head, 30);

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    display(head);

    cout << search(head, 20) << endl;
    cout << search(head, 99);
}