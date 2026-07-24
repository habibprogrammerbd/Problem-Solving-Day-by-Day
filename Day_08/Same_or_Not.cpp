#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < b; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool p = true;
    if (st.size() != q.size())
    {
        p = false;
    }
    else
    {
        while (!st.empty())
        {
            if (q.front() != st.top())
            {
                p = false;
            }
            st.pop();
            q.pop();
        }
    }

    if (p == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
