#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int l = 0;
    for (int r = 0; r < s.size() && l < t.size(); r++)
    {
        if (s[r] == t[l])
        {
            l++;
        }
    }
    if (l == t.size())
    {
        cout << "automaton" << endl;
    }
    else
    {
        map<int, int> mp1, mp2;
        for (int i = 0; i < s.size(); i++)
        {
            mp1[s[i]]++;
        }
        int ok = true;
        for (int i = 0; i < t.size(); i++)
        {
            if (mp1[t[i]] > 0)
            {
                mp1[t[i]]--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            bool both = false;
            for (auto num : mp1)
            {
                if (num.second > 0)
                {
                    both = true;
                    break;
                }
            }
            if (both)
            {
                cout << "both" << endl;
            }
            else
            {
                cout << "array" << endl;
            }
        }
        else
        {
            cout << "need tree" << endl;
        }
    }

    return 0;
}