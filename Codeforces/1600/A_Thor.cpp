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
    map<ll, vector<ll>> cnt;
    ll unread = 0;
    vector<ll> order(300005, 0), read(300005, 0);
    ll ind = 0, read_till = 0;
    while (q--)
    {
        ll type, x;
        cin >> type >> x;
        if (type == 1)
        {
            cnt[x].push_back(ind);
            unread++;
            order[ind] = x;
            read[ind] = 0;
            ind++;
        }
        else if (type == 2)
        {
            for (auto it : cnt[x])
            {
                if (read[it] == 0)
                    unread--;
                read[it] = 1;
            }
            cnt[x] = {};
        }
        else
        {
            while (read_till < x)
            {
                if (read[read_till] == 0)
                {
                    unread--;
                    read[read_till] = 1;
                }
                read_till++;
            }
        }
        cout << unread << endl;
    }

    return 0;
}