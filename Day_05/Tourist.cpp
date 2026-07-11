#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q, a, b;
        cin >> q >> a >> b;
        int ans1 = 0;
        vector<int> ha1(q);

        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;

            ha1[i] = abs((x - a)) + abs((y - b));
        }

        int x = *min_element(ha1.begin(), ha1.end());

        cout << x << endl;
    }

    return 0;
}