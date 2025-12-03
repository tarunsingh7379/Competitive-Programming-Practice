#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;

        int bal = 0;
        int maxSortedPref = 0;
        int minNotSortedPref = 0;
        bool ok = true;

        for (char c : s)
        {
            if (c == '+')
            {
                bal++;
            }
            else if (c == '-')
            {
                bal--;
                maxSortedPref = min(maxSortedPref, bal);
                if (bal < minNotSortedPref)
                    minNotSortedPref = 0;
            }
            else if (c == '1')
            {
                maxSortedPref = max(maxSortedPref, bal);
            }
            else
            {
                if (bal <= 1)
                {
                    ok = false;
                    break;
                }
                if (minNotSortedPref == 0 || minNotSortedPref > bal)
                    minNotSortedPref = bal;
            }

            if (minNotSortedPref != 0 &&
                minNotSortedPref <= maxSortedPref)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    t--;
    return 0;
}
