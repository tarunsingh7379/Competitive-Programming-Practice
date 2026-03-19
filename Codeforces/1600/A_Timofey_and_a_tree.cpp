#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, vector<ll> &c, vector<pair<ll, ll>> &v)
{
    for (auto num : v)
    {
        if (c[num.first] != c[num.second])
        {
            if (num.first != x && num.second != x)
                return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        v.push_back({x, y});
    }
    vector<ll> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll x = -1, y = -1;
    for (auto num : v)
    {
        if (c[num.first] != c[num.second])
        {
            x = num.first;
            y = num.second;
            break;
        }
    }
    if (x == -1)
    {
        cout << "YES" << endl;
        cout << 1 << endl;
    }
    else
    {
        if (check(x, c, v))
        {
            cout << "YES" << endl;
            cout << x + 1 << endl;
        }
        else if (check(y, c, v))
        {
            cout << "YES" << endl;
            cout << y + 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}