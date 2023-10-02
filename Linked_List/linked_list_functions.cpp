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
// agar first he delte krna hai to uske liye n-1 term to hoga he nahe
void deleteAthead(Node *&head)
{
    Node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(Node *&head, int val)
{

    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        // pehla he last element hai
        deleteAthead(head);
        return;
    }
    if (head->data == val)
    {
        deleteAthead(head);
        return;
    }
    Node *temp = head;
    // hme temp ke next ko dudna hai uska
    // link delete krne ke liye
    // 1->2->3->4->NULL
    while (temp->next->data != val)
    {
        //    agar 3 ko delete krna hai to
        // val tak jaenge
        // uske ek peeche tak
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete (todelete);
}

Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        // aage badaenge
        prev = curr;
        curr = next;
        //    next ko upar aage bdaya hai
    }
    // prev=head;
    return prev;
}

Node *reverseRecursive(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {

        return head;
    }

    Node *newH = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newH;
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

    // Node *newHead = reverse(head);
    // display(newHead);

    Node *newHead = reverseRecursive(head);
    display(newHead);
}