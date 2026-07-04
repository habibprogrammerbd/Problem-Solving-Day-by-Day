#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = a - b;
    int z = abs(x);
    if (z > c)
    {
        cout << "No" << endl;
    }
    else if(z <= c)
    {
        cout << "Yes" << endl;
    }

    return 0;
}