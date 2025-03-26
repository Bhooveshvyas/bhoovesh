#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMORY FREE FROM NODE WITH DATA = " << val << endl;
    }
};

void printdll(Node *&head) // printing DLL
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void iah(Node *&head, int d) // inserting at head
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void iat(Node *&tail, int d) // insert at tail
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void iam(Node *&head, Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        iah(head, d);
        return;
    }
    Node *toinsert = new Node(d);
    Node *temp = head;
    int ct = 1;
    while (ct < pos - 1)
    {
        temp = temp->next;
        ct++;
    }
    if (temp->next == NULL)
    {
        iat(tail, d);
        return;
    }
    toinsert->next = temp->next;
    temp->next->prev = toinsert;
    temp->next = toinsert;
    toinsert->prev = temp;
}

void deletion(Node *&head, Node *&tail, int pos) // delete any node in dll
{
    int ct = 1;
    Node *temp = head;
    if (pos == 1)
    {
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    while (ct < pos - 1)
    {
        temp = temp->next;
        ct++;
    }
    if (temp->next->next == NULL)
    {
        tail=temp;
    }
    Node *curr = temp->next;
    Node *prv = temp;
    curr->prev = NULL;
    prv->next = curr->next;
    curr->next = NULL;
}

int length(Node *&head) // length of DLL
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    Node *node1 = new Node(8);
    Node *head = node1;
    Node *tail = node1;
    iat(tail, 13);
    printdll(head);
    iat(tail, 11);
    printdll(head);
    iat(tail, 10);
    printdll(head);
    iat(tail, 25);
    printdll(head);
    iam(head, tail, 2, 100);
    printdll(head);
    iam(head, tail, 1, 101);
    printdll(head);
    iam(head, tail, 8, 102);
    printdll(head);
    deletion(head, tail, 8);
    cout << "HEAD = " << head->data << endl;
    cout << "TAIL = " << tail->data << endl;
    printdll(head);
    int n = length(head);
    cout << "LENGTH = " << n << endl;
}
