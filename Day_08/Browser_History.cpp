#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;

    while (true)
    {
        string s;
        cin >> s;

        if (s == "end")
        {
            break;
        }
        l.push_back(s);
    }
    int t;
    cin >> t;
    auto tmp = l.begin();
    auto find = l.begin();
    while (t--)
    {
        string a;
        string b = " ";
        cin >> a;
        if (a == "visit")
        {
            cin >> b;
        }
        bool x = false;
        if (a == "visit")
        {
            find = tmp;
            for (auto i = l.begin(); i != l.end(); i++)
            {

                tmp = i;
                if (b == *i)
                {
                    cout << b << endl;
                    x = true;
                    break;
                }
            }

            if (x == false)
            {
                tmp = find;
                cout << "Not Available" << endl;
            }
        }
        else if (a == "prev")
        {
            if (tmp != l.begin())
            {
                --tmp;
                cout << *tmp << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (a == "next")
        {
            if (tmp != prev(l.end()))
            {
                ++tmp;
                cout << *tmp << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}