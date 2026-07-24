#include <bits/stdc++.h>
using namespace std;

class my_stack
{
public:
    list<int> ls;

    void push(int val)
    {
        ls.push_back(val);
    }

    void pop()
    {
        ls.pop_back();
    }

    int size()
    {
        return ls.size();
    }

    int top()
    {
        return ls.back();
    }

    bool empty()
    {
        return ls.empty();
    }
};

class my_queue
{
public:
    list<int> ls;

    void push(int val)
    {
        ls.push_back(val);
    }

    void pop()
    {
        ls.pop_front();
    }

    int size()
    {
        return ls.size();
    }

    int front()
    {
        return ls.front();
    }

    bool empty()
    {
        return ls.empty();
    }
};

int main()
{
    my_stack s;
    my_queue q;

    int a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    for (int i = 0; i < b; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool x = true;

    if (s.size() != q.size())
    {
        x = false;
    }
    else
    {
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                x = false;
            }
            s.pop();
            q.pop();
        }
    }

    if (x == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}