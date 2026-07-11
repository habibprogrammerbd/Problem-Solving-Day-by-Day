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

        vector<string> A(3);
        vector<string> B(3);
        for (int i = 0, j = 3; i < 3, j < 6; i++, j++)
        {
            A[i] = v[i];
            B[i] = v[j];
        }
        sort(A.begin(), A.end(), greater<string>());
        sort(B.begin(), B.end(), greater<string>());

        string x = " ";
        string y = " ";

        for (int i = 0; i < 3; i++)
        {
            x = x + A[i];
            y = y + B[i];
        }
        int p = stoi(x);
        int l = stoi(y);

        if (p < l)
        {
            cout << "Bob" << endl;
        }
        else if (p == l)
        {
            cout << "Tie" << endl;
        }

        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}