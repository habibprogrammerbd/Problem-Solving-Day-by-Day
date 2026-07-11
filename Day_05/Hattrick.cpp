#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> v[i];
        }
        int x = 0;

        for (int i = 0; i < 6; i++)
        {
            if (x == 3)
            {
                break;
            }

            if (v[i] == "W")
            {

                x++;
            }
            else
            {
                x = 0;
            }
        }

        if (x >= 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}