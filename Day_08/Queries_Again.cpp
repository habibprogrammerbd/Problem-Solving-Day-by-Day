#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *prev;
    int val;
    node *next;

    node(int val)
    {
        this->next = NULL;
        this->val = val;
        this->prev = NULL;
    }
};
int size(node *head)
{
    node *tmp = head;
    int c = 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }

    return c;
}

void print_foroworld(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void print_backward(node *tail)
{
    node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

void insert_head(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_any_poss(node *head, int val, int idx)
{
    node *newnode = new node(val);

    node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    newnode->prev = tmp;
    tmp->next = newnode;
    newnode->next->prev = newnode;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx == 0)
        {
            insert_head(head, tail, val);
        }
        else if (idx == size(head))
        {
            insert_tail(head, tail, val);
        }
        else if (size(head) < idx || 0 > idx)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (0 <= idx && size(head) >= idx)
        {
            insert_any_poss(head, val, idx);
        }

        cout << "L -> ";
        print_foroworld(head);
        cout << endl;
        cout << "R -> ";
        print_backward(tail);
        cout << endl;
    }

    return 0;
}