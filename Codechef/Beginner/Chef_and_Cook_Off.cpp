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
    vector<string> ans = {"Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean"};
    while (t)
    {
        ll cnt = 0;
        for (ll i = 0; i < 5; i++)
        {
            ll x;
            cin >> x;
            if (x == 1)
            {
                cnt++;
            }
        }
        cout << ans[cnt] << endl;

        t--;
    }

    return 0;
}