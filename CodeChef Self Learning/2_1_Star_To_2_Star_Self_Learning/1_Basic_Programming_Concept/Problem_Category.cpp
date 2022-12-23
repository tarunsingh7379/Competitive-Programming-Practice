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
        ll x;
        cin >> x;
        string ans;
        if (x < 100)
        {
            ans = "Easy";
        }
        else if (x < 200)
        {
            ans = "Medium";
        }
        else
        {
            ans = "Hard";
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}