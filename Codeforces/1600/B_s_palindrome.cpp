#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string sym = "AHIMOoTUVvWwXxY";
    set<char> st;
    for (auto c : sym)
    {
        st.insert(c);
    }
    map<char, char> mp;
    mp['b'] = 'd';
    mp['d'] = 'b';
    mp['p'] = 'q';
    mp['q'] = 'p';

    int n = s.size();
    int l = 0, r = n - 1;
    bool ok = true;
    while (l <= r)
    {
        if (st.count(s[l]))
        {
            if (s[l] != s[r])
            {
                ok = false;
                break;
            }
        }
        else if (mp.find(s[l]) != mp.end())
        {
            if (s[r] != mp[s[l]])
            {
                ok = false;
                break;
            }
        }
        else
        {
            ok = false;
            break;
        }
        l++;
        r--;
    }
    cout << (ok ? "TAK" : "NIE") << endl;

    return 0;
}