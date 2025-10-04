#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_num(ll x)
{
    ll cur = 1;
    while (cur - 1 - x < 0)
    {
        cur *= 2;
    }
    return cur - 1 - x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int l, r;
        cin >> l >> r;
        int n = r;
        vector<int> ans(n + 1, -1);
        for (int i = n; i >= 0; i--)
        {
            if (ans[i] != -1)
                continue;
            ll x = get_num(i);
            ans[x] = i;
            ans[i] = x;
        }
        cout << 1LL * n * (n + 1) << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}