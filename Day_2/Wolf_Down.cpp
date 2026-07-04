#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string s;
        cin >> a;
        cin >> s;
        int count = 0;
        for (int i = 0; i < a; i++)
        {

            if (s[i] == '1')
            {
                break;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}