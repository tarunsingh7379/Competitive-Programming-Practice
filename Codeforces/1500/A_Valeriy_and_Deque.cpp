#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    ll a[n];
    deque<ll> dq;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        dq.push_back(a[i]);
    }
    int ind = 0, val = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > val)
        {
            val = a[i];
            ind = i;
        }
    }
    int op = ind;
    vector<pair<int, int>> ans;
    while (op--)
    {
        int x = dq.front();
        dq.pop_front();
        int y = dq.front();
        dq.pop_front();
        ans.push_back({x, y});
        if (x < y)
        {
            swap(x, y);
        }
        dq.push_front(x);
        dq.push_back(y);
    }
    vector<int> temp;
    while (dq.size() > 0)
    {
        temp.push_back(dq.front());
        dq.pop_front();
    }
    int first = temp[0];
    temp.erase(temp.begin());
    while (q--)
    {
        ll x;
        cin >> x;
        x--;
        if (x < ans.size())
        {
            cout << ans[x].first << " " << ans[x].second << endl;
        }
        else
        {
            ll extra = x - ans.size();
            cout << first << " " << temp[extra % (n - 1)] << endl;
        }
    }

    return 0;
}