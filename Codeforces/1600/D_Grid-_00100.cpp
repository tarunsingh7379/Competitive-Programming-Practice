#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s(n, '0');
            v.push_back(s);
        }
        ll K = k;
        for (ll j = 0; j < n; j++)
        {
            for (ll i = 0; i < n; i++)
            {
                if (k > 0)
                {
                    v[i][(j + i) % n] = '1';
                    k--;
                }
            }
        }
        if (K % n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        for (auto num : v)
        {
            cout << num << endl;
        }
        t--;
    }

    return 0;
}