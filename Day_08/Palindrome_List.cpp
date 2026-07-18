#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list_one;

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
    int size = list_one.size();
    int z = size / 2;

    list<int> list_1;
    list<int> list_2;

    for (auto i = list_one.begin(); i != next(list_one.begin(), z + 1); i++)
    {
        list_1.push_back(*i);
    }
    for (auto i = next(list_one.begin(), z); i != list_one.end(); i++)
    {
        list_2.push_back(*i);
    }
    list_2.reverse();
    bool ans = true;
    for (auto one = list_1.begin(), two = list_2.begin(); one != list_1.end() && two != list_2.end(); one++, two++)
    {
        if (*one != *two)
        {
            ans = false;
        }
    }
    if (ans == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}