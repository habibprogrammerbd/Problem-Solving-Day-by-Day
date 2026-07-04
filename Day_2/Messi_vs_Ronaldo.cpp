#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int messi = (a * 2) + b;
    int Ronaldo = (x * 2) + y;

    if (messi > Ronaldo)
    {
        cout << "Messi\n";
    }
    else if (messi == Ronaldo)
    {
        cout << "Equal\n";
    }
    
    else
    {
        cout << "Ronaldo\n";
    }

    return 0;
}