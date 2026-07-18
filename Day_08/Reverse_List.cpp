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

    // reverse(list_one.begin(), list_one.end());
    list_one.reverse();

    for (int value : list_one)
    {
        cout << value << " ";
    }

    return 0;
}