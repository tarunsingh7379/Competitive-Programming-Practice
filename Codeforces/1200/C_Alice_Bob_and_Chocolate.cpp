#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    deque<ll> dq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        dq.push_back(x);
    }

    ll alice_t = 0, bob_t = 0, alice = 0, bob = 0;
    while (!dq.empty())
    {
        if (alice_t != 0)
        {
            alice_t--;
        }
        if (bob_t != 0)
        {
            bob_t--;
        }
        if (alice_t == 0)
        {
            alice_t = dq.front();
            dq.pop_front();
            alice++;
        }
        if (!dq.empty())
        {
            if (bob_t == 0)
            {
                bob_t = dq.back();
                dq.pop_back();
                bob++;
            }
        }
    }
    cout << alice << " " << bob << endl;

    return 0;
}