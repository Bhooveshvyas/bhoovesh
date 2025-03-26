#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printll(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void iah(Node *&head, int d) // unsert at head
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void iat(Node *&tail, int d) // insert at tail
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void iam(Node *&tail, Node *&head, int pos, int d) // insert at middle
{
    int t = 1;
    Node *naya = new Node(d);
    Node *temp = head;
    if (pos == 1)
    {
        iah(head, d);
        return;
    }
    while (temp != NULL)
    {
        if (t == pos - 1)
        {
            Node *temp1 = temp->next;
            temp->next = naya;
            naya->next = temp1;
            if (temp->next == NULL)
                tail = naya;
            return;
        }
        else
            temp = temp->next;
        t++;
    }
}

void deletion(Node *&tail, Node *&head, int pod)
{
    int ct = 1;
    Node *temp = head;
    if (pod == 1)
    {
        head = temp->next;
    }

    while (temp != NULL)
    {
        if (ct == pod - 1)
        {
            if (temp->next->next == NULL)
            {
                tail = temp;
                temp->next = NULL;
                return;
            }
            temp->next = temp->next->next;
            return;
        }
        temp = temp->next;
        ct++;
    }
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    iat(tail, 4);
    printll(head);
    iat(tail, 87);
    printll(head);
    iat(tail, 78);
    printll(head);
    int pos = 3;
    iam(tail, head, pos, 3);
    printll(head);
    deletion(tail, head, 2);
    cout << "AFTER DELETION -> " << endl;
    printll(head);
    cout << "HEAD -> " << head->data << endl;
    cout << "TAIL -> " << tail->data << endl;
}