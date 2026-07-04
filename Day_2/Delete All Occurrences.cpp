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
void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void Delete_All_Occurrences(Node *&head, int val)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->value == val)
        {
            Node *del = tmp->next;
            tmp->next = del->next;
            delete del;
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
    int val;
    cin >> val;

    Delete_All_Occurrences(head, val);
    print_link_list(head);

    return 0;
}