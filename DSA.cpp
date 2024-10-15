#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void deletenode(Node *&head, int position)
{
    // For first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle node
        Node *curr = head;
        Node *previ = NULL;

        int count = 1;
        while (count < position)
        {
            previ = curr;
            curr = curr->next;
            count++;
        }

        curr->next->prev = previ;
        previ->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
    }
}

void insertattail(Node *tail, int d)
{
    Node *temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head; // head is a complete node address
    head->prev = temp; // storing temp address in head's previous
    head = temp;
}

void insertatposition(Node *&bhoovesh, int position, int d)
{
    if (position == 1)
    {
        insertathead(bhoovesh, d);
        return;
    }

    Node *temp = aniket;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *pos = new Node(d);
    pos->next = temp->next;
    temp->next->prev = pos;
    pos->prev = temp;
    temp->next = pos;
}

int getlength(Node *&bhoovesh)
{
    int len = 0;
    Node *temp = bhoovesh;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node *&bhoovesh)
{
    Node *temp = bhoovesh;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *bhoovesh = new Node(10);
    Node *head = bhoovesh;
    Node *tail = bhoovesh;

    print(bhoovesh);

    // cout << getlength(bhoovesh) << endl;

    insertathead(bhoovesh, 70);
    print(bhoovesh);

    insertathead(bhoovesh, 80);
    print(bhoovesh);

    insertathead(bhoovesh, 60);
    print(bhoovesh);

    insertathead(bhoovesh, 40);
    print(bhoovesh);

    insertattail(tail, 50);
    print(bhoovesh);

    insertatposition(bhoovesh, 3, 12);
    print(bhoovesh);

    deletenode(bhoovesh, 1);
    print(bhoovesh);

    return 0;
}