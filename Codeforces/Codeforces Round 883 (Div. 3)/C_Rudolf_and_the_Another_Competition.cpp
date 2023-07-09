#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

struct player
{
    ll ind, points, penalty;
};

bool cmp(player &a, player &b)
{
    if (a.points == b.points)
    {
        if (a.penalty == b.penalty)
        {
            return a.ind < b.ind;
        }
        else
        {
            return a.penalty < b.penalty;
        }
    }
    else
    {
        return a.points > b.points;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<player> v;
        for (ll i = 0; i < n; i++)
        {
            vector<int> a;
            for (ll j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                a.push_back(x);
            }
            sort(a.begin(), a.end());
            ll time = 0, penalty = 0, points = 0;
            for (ll j = 0; j < m; j++)
            {
                time += a[j];
                if (time > k)
                {
                    break;
                }
                penalty += time;
                points++;
            }
            player p;
            p.ind = i;
            p.points = points;
            p.penalty = penalty;
            v.push_back(p);
        }
        sort(v.begin(), v.end(), cmp);
        ll rank = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].ind == 0)
            {
                rank = i + 1;
                break;
            }
        }
        cout << rank << endl;
        t--;
    }

    return 0;
}