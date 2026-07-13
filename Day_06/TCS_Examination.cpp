#include <bits/stdc++.h>
using namespace std;

class mark
{
public:
    int DSA_mark;
    int TOC_mark;
    int DM_markl;
};

int total_marks(int a, int b, int c)
{
    int ans = a + b + c;
    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        mark Dragon, Sloth;
        cin >> Dragon.DSA_mark >> Dragon.TOC_mark >> Dragon.DM_markl;
        cin >> Sloth.DSA_mark >> Sloth.TOC_mark >> Sloth.DM_markl;

        int Dragon_total_mark = total_marks(Dragon.DSA_mark, Dragon.TOC_mark, Dragon.DM_markl);
        int Sloth_total_mark = total_marks(Sloth.DSA_mark, Sloth.TOC_mark, Sloth.DM_markl);
        if (Dragon_total_mark > Sloth_total_mark)
        {
            cout << "DRAGON\n";
        }
        else if (Dragon_total_mark == Sloth_total_mark)
        {
            if (Dragon.DSA_mark == Sloth.DSA_mark)
            {
                if (Dragon.TOC_mark == Sloth.TOC_mark)
                {
                    cout << "TIE\n";
                }
                else if (Dragon.TOC_mark > Sloth.TOC_mark)
                {
                    cout << "DRAGON\n";
                }
                else
                {
                    cout << "SLOTH\n";
                }
            }
            else if (Dragon.DSA_mark > Sloth.DSA_mark)
            {
                cout << "DRAGON\n";
            }
            else
            {
                cout << "SLOTH\n";
            }
        }
        else
        {
            cout << "SLOTH\n";
        }
    }

    return 0;
}