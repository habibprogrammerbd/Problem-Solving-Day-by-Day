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

        int ans1 = a / x;
        int ans2 = a - y;

        if (a % y == 0)
        {
            cout << ans2 +1 << endl;
        }    
        else
        {
            cout << ans1 << endl;
        }
    }

    return 0;
}