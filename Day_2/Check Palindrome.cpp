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
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void check_palindrome2(Node *&head)
{
    Node *tmp = head;

    for (int i = 0; i < (size(head) / 2) + 1; i++)
    {
        tmp = tmp->next;
    }

    for (int i = (size(head) / 2) + 1; i < size(head); i++)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void check_palindrome1(Node *&head)
{
    Node *tmp = head;

    for (int i = 0; i < (size(head) / 2) - 1; i++)
    {
        cout << tmp->value << " ";
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
    check_palindrome2(head);
    // print_link_list(head);

    return 0;
}