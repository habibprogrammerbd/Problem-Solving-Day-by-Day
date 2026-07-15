#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> v(n);
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                {
                    count1++;
                }
                else if (v[i] % 2 != 0)
                {
                    count2++;
                }
            }
            else if ( i % 2 != 0)
            {
                if (v[i] % 2 == 0)
                {
                    count2++;
                }
                else if (v[i] % 2 != 0)
                {
                    count1++;
                }
            }
        }

        cout << min(count1, count2) << endl;
    }
    return 0;
}