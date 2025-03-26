#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMORY FREE OF THE NODE WITH DATA = " << val << endl;
    }
};

void in(Node *&tail, int ele, int d)
{
    if (tail == NULL)
    {
        Node *t1 = new Node(d);
        tail = t1;
        t1->next = t1;
        return;
    }

    Node *curr = tail;
    while (curr->data != ele)
    {
        curr = curr->next;
    }
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}

void print(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "LIST IS EMPTY!!!!......";
        return;
    }
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

void deletion(Node *&tail, int val)
{
    if (tail == NULL)
    {
        cout << "LIST IS EMPTY!!!!......"<<endl;
        return;
    }
    Node *prev = tail;
    Node *curr = prev->next;
    while (curr->data != val)
    {
        prev = curr;BITBIT
        curr=curr->next;
    }
    
    prev->next = curr->next;
    if (tail == curr)
    {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *tail = NULL;
    in(tail, 5, 3);
    print(tail);
    // in(tail, 3, 5);
    // print(tail);
    // in(tail, 5, 7);
    // print(tail);
    // in(tail, 7, 9);
    // print(tail);
    // in(tail, 5, 6);
    // print(tail);
    // in(tail, 9, 10);
    // print(tail);
    // in(tail, 3, 4);
    // print(tail);
    // deletion(tail, 5);
    // print(tail);
    deletion(tail, 3);
    cout<<"AFTER DELETION = tail = "<<tail->data<<endl;
    print(tail);
}