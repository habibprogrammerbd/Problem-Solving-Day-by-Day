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
        int size = 2 * n;
        vector<int> v(size);
        for (int i = 0; i < size; i++)
        {
            cin >> v[i];
        }

        vector<int> fuc(10);

        for (int i = 0; i < size; i++)
        {
            fuc[v[i]]++;
        }

        int big = * max_element(fuc.begin(),fuc.end());

        // cout << big << endl;

        if (big >= 3)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}