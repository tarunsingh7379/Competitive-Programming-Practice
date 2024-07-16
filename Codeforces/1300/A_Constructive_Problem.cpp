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
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll mex = 0;
        while (mp[mex])
        {
            mex++;
        }
        ll st = -1, end = -1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == mex + 1)
            {
                if (st == -1)
                {
                    st = i;
                }
                end = i;
            }
        }
        if (st != -1)
        {
            for (ll i = st; i <= end; i++)
            {
                a[i] = mex;
            }
            map<ll, ll> temp;
            for (ll i = 0; i < n; i++)
            {
                temp[a[i]]++;
            }
            ll me = 0;
            while (temp[me])
            {
                me++;
            }
            if (me == mex + 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            int cnt = 0;
            for (auto it : mp)
            {
                if (it.second && it.first < mex)
                    cnt++;
            }
            if (cnt == n)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }

        t--;
    }

    return 0;
}