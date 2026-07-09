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
void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void delete_head(Node *&head)
{
    Node *del = head;
    head = head->next;
    delete del;
}

void delete_all_occurrences(Node *&head, int value)
{
    Node *tmp = head;
    while (tmp != NULL)
    {

        if (tmp->value == value)
        {
            delete_head(tmp);
        }
        else if (tmp->next->value == value)
        {
            Node *x = tmp->next;
            tmp->next = x->next;
            delete x;
        }

        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_at_tail(head, tail, value);
    }
    int value;
    cin >> value;
    delete_all_occurrences(head, value);
    print_link_list(head);
    return 0;
}