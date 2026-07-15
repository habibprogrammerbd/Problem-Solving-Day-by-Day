#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, n;
        string s;
        cin >> n >> a;
        cin >> s;

        int count = 0;
        int count1= 0;
        for (int i = a -1; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                count++;
            }
        }
        for (int i = a -1; i >= 0; i--)
        {
            if (s[i] == 'R')
            {
                count1++;
            }
            
        }
        
        cout << min(count,count1) << endl;
    }

    return 0;
}