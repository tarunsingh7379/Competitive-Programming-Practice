#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    if (k >= 50)
    {
        cout << "No" << endl;
    }
    else
    {
        set<ll> st;
        for (ll i = 1; i <= k; i++)
        {
            st.insert(n % i);
        }
        cout << (st.size() == k ? "Yes" : "No") << endl;
    }

    return 0;
}