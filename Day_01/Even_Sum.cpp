// Question.............................................
// Link // https://www.codechef.com/problems/EVENSUM1
// ..
// ..
//..

// Ans...................................................................

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + v[i];
        }
        bool Ans = false;
        if (sum % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    Ans = true;
                    break;
                }
            }
        }
        else if (sum % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 != 0)
                {
                    Ans = true;
                    break;
                }
            }
        }
        if (Ans == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}