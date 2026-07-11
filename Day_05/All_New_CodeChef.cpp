#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if ( a > b)
    {
        cout << "New\n"; 
    }
    else if (a < b)
    {
        cout << "Old\n";
    }
    else
    {
        cout << "Same\n";
    }
    
    
    return 0;
}