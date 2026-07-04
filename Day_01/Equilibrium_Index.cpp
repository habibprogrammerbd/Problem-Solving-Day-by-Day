// // Question.............................................
// Problem 2: Equilibrium Index
// Description: Given an array of integers, find the equilibrium index. An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
// Example:
// Input
// Output
// 7
// -7 1 5 2 -4 3 0
// 3

// Explanation: At index 3, the sum of elements before it is -1 and after it is also -1

// -7
// 1
// 5
// 2
// -4
// 3
// 0

//  	0	   1		2		3		4		5		6
// Sum of before index 3  = -7 + 1 + 5 = -1
// Sum of after index    3	  = -4 + 3 + 0 = -1

// Ans.......................................................
// Time complexity...O(N*N)..
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

    for (int i = 0; i < n; i++)
    {
        int left_sum_value = 0, right_sum_value = 0;
        for (int j = 0; j < i; j++)
        {
            left_sum_value = left_sum_value + v[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            right_sum_value = right_sum_value + v[j];
        }
        if (left_sum_value == right_sum_value)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

// suffix prefix ,,
// Time complexity...O(N)..

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

    // prefix
    vector<int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // suffix
    vector<int> suf(n);
    suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (pre[i] == suf[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}