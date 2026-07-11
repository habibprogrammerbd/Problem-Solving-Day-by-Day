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

        int x = a / (b + 1);
        int y = x * b;

        int w = a - y;

        cout << w << endl;
    }
    return 0;
}