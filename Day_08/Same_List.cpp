#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list_one;
    list<int> list_two;

    int value_one;
    while (true)
    {
        cin >> value_one;
        if (value_one == -1)
        {
            break;
        }
        list_one.push_back(value_one);
    }
    int value_two;
    while (true)
    {
        cin >> value_two;
        if (value_two == -1)
        {
            break;
        }
        list_two.push_back(value_two);
    }

    if (list_one.size() != list_two.size())
    {
        cout << "NO\n";
    }
    else
    {
        bool ans = true;
        for (auto one = list_one.begin(), two = list_two.begin(); one != list_one.end() && two != list_two.end(); one++, two++)
        {
            if (*one != *two)
            {
                ans = false;
                break;
            }
        }
        if (ans == true)
        {
            cout << "YES\n";
        }
    }

    return 0;
}