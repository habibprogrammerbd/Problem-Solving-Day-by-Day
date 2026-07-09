#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans(n);

    for (int i = 0; i < n -1; i++)
    {
        if (v[i] > v[i + 1])
        {
            ans[i] = v[i];
        }
        else if (v[i] < v[i + 1])
        {
            ans[i] = v[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}