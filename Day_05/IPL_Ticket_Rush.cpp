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
        int x = 0;
        bool d = true;

        if (a > b)
        {

            for (int i = a; i > b; i--)
            {
                x++;
            }
        }
        else
        {
            d = false;
        }

        if (d == true)
        {
            cout << x << endl;
        }
        else
        {
            cout << x << endl;
        }

        // cout << a << b;
    }

    return 0;
}