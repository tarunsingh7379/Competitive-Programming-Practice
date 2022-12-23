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
    int n = s.size();
    int prefix_hash[n + 1];

    auto power = [&](ll base, ll n, ll m) -> ll
    {
        ll ans = 1;
        while (n != 0)
        {
            if (n % 2 == 1)
            {
                n = n - 1;
                ans = (ans * base) % m;
            }
            else
            {
                n = n / 2;
                base = (base * base) % m;
            }
        }
        return ans;
    };

    auto compute_substring_hash = [&](int l, int r) -> ll
    {
        ll hash = prefix_hash[r];

        if (l > 0)
        {
            hash = (hash - prefix_hash[l - 1] + M) % M;
        }

        hash = (hash * power(power(31, l, M), M - 2, M)) % M;

        return hash;
    };

    int lps[n];
    lps[0] = 0;
    int len = 0, i = 1;

    while (i < n)
    {

        if (s[i] == s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }

    ll pr = 1;
    ll hash = 0;
    for (ll i = 0; i < n; i++)
    {
        hash = (hash + ((s[i] - 'a' + 1) * pr) % M) % M;
        prefix_hash[i] = hash;
        pr = (pr * 31) % M;
    }

    int last = 0, r = -1;

    for (int i = 1; i < n - 1; i++)
    {
        if (lps[i] > last)
        {
            int len = lps[i];
            int hash1 = prefix_hash[len - 1];
            int hash2 = compute_substring_hash(n - len, n - 1);
            if (hash1 == hash2)
            {
                r = len - 1;
                last = len;
            }
        }
    }
    if (last == 0)
    {
        cout << "Just a legend";
    }
    else
    {
        for (int i = 0; i <= r; i++)
        {
            cout << s[i];
        }
    }
    return 0;
}