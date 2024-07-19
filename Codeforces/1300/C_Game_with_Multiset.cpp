#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    vector<int> freq(30, 0);
    while (q--)
    {
        int type, val;
        cin >> type >> val;
        if (type == 1)
        {
            freq[val]++;
        }
        else
        {

            for (ll i = 29; i >= 0; i--)
            {
                ll x = min(val >> i, freq[i]);
                val -= (x << i);
            }
            cout << (val == 0 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}