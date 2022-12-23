#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0;
    int ind = -1;
    n = s.size();
    auto check = [&](int i) -> int
    {
        l = 0;
        if (s[i] > s[l])
        {
            ind = i;
            return 1;
        }
        else if (s[i] == s[l])
        {
            l = 1;
            int r = i + 1;
            int cur = -1;
            while (l < i && r < n)
            {
                if (s[r] > s[l])
                {
                    cur = i;
                    break;
                }
                else if (s[r] < s[l])
                {
                    l = -1;
                    r = -1;
                    break;
                }
                else
                {
                    l++;
                    r++;
                }
            }
            if (cur != -1)
            {
                ind = cur;
                return 1;
            }
            if (l == i || r == n)
            {
                ind = i;
                return 2;
            }
            ind = -1;
            return 0;
        }
        ind = -1;
        return 0;
    };
    ll i = 0;
    while (i < n)
    {
        if (s[i] > s[l])
        {
            ind = i;
            break;
        }
        else if (s[i] == s[l])
        {

            while (i < n && check(i))
            {
                ll x = check(i);
                if (x == 1)
                {
                    break;
                }
                else
                {
                    i = i + i;
                }
            }

            if (ind != -1)
            {
                break;
            }
            l = 0;
        }
        i++;
    }

    string x;
    if (ind == -1)
    {
        for (ll i = 0; i < n; i++)
        {
            x.push_back(s[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            x.push_back(s[i]);
        }
    }
    else
    {
        for (ll i = 0; i < ind; i++)
        {
            x.push_back(s[i]);
        }
        for (ll i = 0; i < ind; i++)
        {
            x.push_back(s[i]);
        }
    }
    while (x.size() < k)
    {
        ll z = x.size();
        for (ll i = 0; i < z; i++)
        {
            x.push_back(x[i]);
        }
    }
    for (ll i = 0; i < k; i++)
    {
        cout << x[i];
    }
    cout << endl;
    return 0;
}