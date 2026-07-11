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

        int x = 2 * a;
        int y = 2 * b;
        int w = y - x;

        if (b <= a)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << w << endl;
        }
    }

    return 0;
}