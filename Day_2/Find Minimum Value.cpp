#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int minimum(Node *&head)
{
    Node *tmp = head;
    int min = tmp->value;
    while (tmp != NULL)
    {
        if (tmp->value < min)
        {
            min = tmp->value;
        }
        tmp = tmp->next;
    }

    return min;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (cin >> value)
    {
        insert_at_tail(head, tail, value);
    }

    cout << minimum(head) << endl;

    return 0;
}