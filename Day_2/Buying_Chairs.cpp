#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;

        if (x <= a)
        {
            cout << x * 2 << endl;
        }
        else
        {
            cout << (a * 2) + (x - a) << endl;
        }
    }

    return 0;
}