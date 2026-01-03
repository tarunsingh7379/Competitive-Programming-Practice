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
        ll n, m;
        cin >> n >> m;
        ll N = n + m + 1;
        ll a[N], b[N];
        for (ll i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < N; i++)
        {
            cin >> b[i];
        }
        ll tot = 0, cnt_p = 0, cnt_t = 0;
        ll type[N];
        ll first_bad_ind = -1;
        for (ll i = 0; i < N - 1; i++)
        {
            if (a[i] > b[i])
            {
                if (cnt_p < n)
                {
                    type[i] = 0;
                    cnt_p++;
                    tot += a[i];
                }
                else
                {
                    type[i] = 1;
                    cnt_t++;
                    tot += b[i];
                    if (first_bad_ind == -1)
                    {
                        first_bad_ind = i;
                    }
                }
            }
            else
            {
                if (cnt_t < m)
                {
                    type[i] = 1;
                    cnt_t++;
                    tot += b[i];
                }
                else
                {
                    type[i] = 0;
                    cnt_p++;
                    tot += a[i];
                    if (first_bad_ind == -1)
                    {
                        first_bad_ind = i;
                    }
                }
            }
        }
        ll ans = 0;
        for (ll i = 0; i < N - 1; i++)
        {
            ans = tot;
            if (type[i] == 0)
                ans -= a[i];
            else
                ans -= b[i];
            if (first_bad_ind != -1 && i < first_bad_ind && type[i] != type[first_bad_ind])
            {
                if (type[first_bad_ind] == 0)
                    ans -= a[first_bad_ind];
                else
                    ans -= b[first_bad_ind];

                if (type[i] == 0)
                    ans += a[first_bad_ind];
                else
                    ans += b[first_bad_ind];

                if (type[first_bad_ind] == 0)
                    ans += a[N - 1];
                else
                    ans += b[N - 1];
            }
            else
            {
                if (type[i] == 0)
                    ans += a[N - 1];
                else
                    ans += b[N - 1];
            }
            cout << ans << " ";
        }
        cout << tot << endl;
        t--;
    }

    return 0;
}