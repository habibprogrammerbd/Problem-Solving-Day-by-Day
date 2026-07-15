#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        int w = (a - y + x - 1);
        int n = (a + x - 1) / x;

        int p = 1;
        
        if (a > y)
        {
            p = p + w / x;
        }

        cout << min(n, p) << endl;
    }

    return 0;
}