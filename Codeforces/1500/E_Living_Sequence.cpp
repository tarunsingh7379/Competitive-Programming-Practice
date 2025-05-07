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
        ll k;
        cin >> k;
        vector<ll> v;
        while (k)
        {
            v.push_back(k % 9);
            k /= 9;
        }
        reverse(v.begin(), v.end());
        for (auto num : v)
        {
            if (num < 4)
            {
                cout << num;
            }
            else
            {
                cout << num + 1;
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}