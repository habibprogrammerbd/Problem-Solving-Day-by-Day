#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, r;
        cin >> a >> x >> r;

        int pass = a * x;

        int v = pass / 2;

        if (v < r)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}