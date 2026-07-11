#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        bool v = false;

        int x = b / 100;
        if (b % 100 != 0)
        {
            v = true;
        }

        int p = x;
        if (v == true)
        {
            p = p + 1;
        }

        if (a < p)
        {
            cout << p - a << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        }
    return 0;
}