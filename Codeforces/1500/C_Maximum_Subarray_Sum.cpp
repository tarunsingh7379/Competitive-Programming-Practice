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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                pos = i;
                a[i] = -1e13;
            }
        }

        ll sum = 0, ans = 0;
        ll j = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            while (j <= i && sum < 0)
            {
                sum -= a[j];
                j++;
            }
            ans = max(ans, sum);
        }
        if ((pos != -1 && ans > k) || (pos == -1 && ans != k))
        {
            cout << "No" << endl;
        }
        else
        {
            if (pos != -1)
            {
                ll left = 0, right = 0, sum = 0;
                for (int i = pos + 1; i < n; i++)
                {
                    sum += a[i];
                    right = max(right, sum);
                }
                sum = 0;
                for (int i = pos - 1; i >= 0; i--)
                {
                    sum += a[i];
                    left = max(left, sum);
                }
                a[pos] = k - left - right;
            }
            cout << "Yes" << endl;
            for (auto num : a)
            {
                cout << num << " ";
            }
            cout << endl;
        }

        t--;
    }

    return 0;
}