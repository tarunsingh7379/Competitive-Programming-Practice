#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp1, mp2;
        for (ll i = 0; i < l; i++)
        {
            mp1[a[i]]++;
        }
        for (ll i = l; i < n; i++)
        {
            mp2[a[i]]++;
        }
        ll ans = 0;
        if (l == r)
        {
            for (ll i = 0; i < l; i++)
            {
                if (mp2[a[i]] > 0)
                {
                    mp2[a[i]]--;
                }
                else
                {
                    ans++;
                }
            }
        }
        else if (l < r)
        {
            int cnt = r - n / 2;
            ans = cnt;
            vector<int> vis(n, 0);
            vector<int> left;
            for (int i = 0; i < l; i++)
            {
                left.push_back(a[i]);
            }
            for (int i = l; i < n && cnt > 0; i++)
            {
                if (mp1[a[i]] > 0)
                {
                    mp1[a[i]]--;
                    mp2[a[i]]--;
                    vis[i] = 1;
                }
                else if (mp2[a[i]] > 1)
                {
                    mp2[a[i]]--;
                    mp1[a[i]]++;
                    left.push_back(a[i]);
                    vis[i] = 1;
                    cnt--;
                }
            }
            for (int i = l; i < n && cnt > 0; i++)
            {
                if (vis[i] == 0)
                {
                    mp2[a[i]]--;
                    mp1[a[i]]++;
                    left.push_back(a[i]);
                    cnt--;
                }
            }
            for (int i = 0; i < left.size(); i++)
            {
                if (mp2[left[i]] > 0 && mp1[left[i]] > 0)
                {
                    mp2[left[i]]--;
                    mp1[left[i]]--;
                }
                else
                {
                    ans++;
                }
            }
        }
        else
        {
            int cnt = l - n / 2;
            ans = cnt;
            vector<int> vis(n, 0);
            vector<int> right;
            for (int i = l; i < n; i++)
            {
                right.push_back(a[i]);
            }
            for (int i = 0; i < l && cnt > 0; i++)
            {
                if (mp2[a[i]] > 0)
                {
                    mp2[a[i]]--;
                    mp1[a[i]]--;
                    vis[i] = 1;
                }
                else if (mp1[a[i]] > 1)
                {
                    mp1[a[i]]--;
                    mp2[a[i]]++;
                    right.push_back(a[i]);
                    vis[i] = 1;
                    cnt--;
                }
            }
            for (int i = 0; i < l && cnt > 0; i++)
            {
                if (vis[i] == 0)
                {
                    mp1[a[i]]--;
                    mp2[a[i]]++;
                    right.push_back(a[i]);
                    cnt--;
                }
            }
            for (int i = 0; i < right.size(); i++)
            {
                if (mp1[right[i]] > 0 && mp2[right[i]] > 0)
                {
                    mp1[right[i]]--;
                    mp2[right[i]]--;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}