// question
// Problem-3: Search Query

// WAP that takes an array of size n and q queries as input. For each query you will be given a number. For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’. Solve this problem in an optimized way.

// Sample input
// Sample output
// 5
// 6 3 2 1 8

// 4

// 1
// 5
// 2
// 9
// YES
// NO
// YES
// NO

//Ans................................................................................................................

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int p;
    cin >> p;
    while (p--)
    {
        int t;
        cin >> t;
        int flag = 0;
        int left = 0;
        int right = n - 1;
        while (left <= right)
        {

            int mid = (left + right) / 2;
            if (v[mid] == t)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < t)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}