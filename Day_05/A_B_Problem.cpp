#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a / b;

    int y = a % b;

    double z = (double)a / b;

    cout << x << " " << y << " " << fixed << setprecision(5) << z << endl;
    return 0;
}