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

void insert_head(Node *&head, int value)
{
    Node *newnode = new Node(value);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_before_value(Node *&head, int index, int val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        // if (tmp->value == index)
        // {
        //     insert_head(head, val);
        //     return;
        // }
        if (tmp->next != NULL)
        {

            if (tmp->next->value == index)
            {
                Node *newnode = new Node(val);
                newnode->next = tmp->next;
                tmp->next = newnode;
                tmp = tmp->next;
            }
        }

        tmp = tmp->next;
    }
}

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
    int index, val;
    cin >> index >> val;
    // insert_head(head,val);
    insert_before_value(head, index, val);
    // add(head, index, val);

    print_link_list(head);
    return 0;
}