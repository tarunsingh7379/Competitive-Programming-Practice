#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll row, ll col, vector<string> &v, ll n)
{
    ll cost = 0;
    for (ll j = row; j < col; j++)
    {
        ll cnt1 = 0, cnt2 = 0;
        if (v[row][j] == '1')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (v[j][col] == '1')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (v[col][n - j - 1] == '1')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (v[n - j - 1][row] == '1')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (cnt1 > cnt2)
        {
            // v[row][j] = '1';
            // v[j][col] = '1';
            // v[col][n - j - 1] = '1';
            // v[n - j - 1][row] = '1';
            cost += cnt2;
        }
        else
        {
            // v[row][j] = '0';
            // v[j][col] = '0';
            // v[col][n - j - 1] = '0';
            // v[n - j - 1][row] = '0';
            cost += cnt1;
        }
    }
    return cost;
}

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
        vector<string> v;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        ll col = n - 1, ans = 0;
        for (ll i = 0; i < n / 2; i++)
        {
            ans = ans + func(i, col, v, n);
            col--;
        }
        // for (auto num : v)
        // {
        //     cout << num << endl;
        // }
        cout << ans << endl;
        t--;
    }

    return 0;
}