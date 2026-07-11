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
        vector<int> v(a);
        vector<int> ans(a);
        int ans_f = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < a; i++)
        {
            int w = v[i] * x;
            if (w > y)
            {
                ans[i] = y;
            }
            else
            {
                ans[i] = w;
            }
        }

        for (int i = 0; i < a; i++)
        {
            ans_f = ans_f + ans[i];
        }

        cout << ans_f << endl;
    }

    return 0;
}