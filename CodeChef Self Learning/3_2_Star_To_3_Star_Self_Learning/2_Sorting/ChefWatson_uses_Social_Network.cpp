#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

struct post
{
    ll f, p;
    string s;
};

bool cmp(struct post a, struct post b)
{
    return a.p > b.p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    vector<post> v1, v2;
    for (ll i = 0; i < m; i++)
    {
        ll f, p;
        string s;
        cin >> f >> p >> s;
        struct post pp;
        pp.f = f;
        pp.p = p;
        pp.s = s;
        if (st.count(f))
        {
            v1.push_back(pp);
        }
        else
        {
            v2.push_back(pp);
        }
    }

    sort(v1.begin(), v1.end(), cmp);
    sort(v2.begin(), v2.end(), cmp);
    for (auto num : v1)
    {
        cout << num.s << endl;
    }
    for (auto num : v2)
    {
        cout << num.s << endl;
    }
    return 0;
}