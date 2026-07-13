#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int ans = 10 - x;

        if (ans >= 3)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}