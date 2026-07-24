#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        queue<int> q;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                st.push(s[i] - '0');
            }
            else if (s[i] == '1')
            {
                q.push(s[i] - 1);
            }
        }

        if (st.size() == q.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}