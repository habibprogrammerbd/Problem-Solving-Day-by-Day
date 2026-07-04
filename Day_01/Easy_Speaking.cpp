// Problem link.....
// https://www.codechef.com/problems/EZSPK

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
        string word;
        cin >> word;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (count == 4)
            {
                break;
            }

            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
            }
        }
        if (count >= 4)
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