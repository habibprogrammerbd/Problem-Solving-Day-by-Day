#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    list<int> list_one;
    while (t--)
    {
        int idx, val;
        cin >> idx >> val;
        bool ans = false;
        int size = list_one.size();
        if (size >= idx && idx >= 0)
        {
            list_one.insert(next(list_one.begin(), idx), val);
        }
        else if (size < idx)
        {
            cout << "Invalid\n";
            ans = true;
        }
        else if (idx < 0)
        {
            cout << "Invalid\n";
            ans = true;
        }

        if (ans == false)
        {
            for (int value : list_one)
            {
                cout << value << " ";
            }
            cout << endl;
            for (auto i = prev(list_one.end());; i--)
            {
                cout << *i << " ";
                if (i == list_one.begin())
                {
                    break;
                }
            }
            cout << endl;
        }
    }

    return 0;
}