#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[20][105];

ll solve(ll floor, ll pos, ll maxFloor,
         vector<ll> &leftMost, vector<ll> &rightMost, ll m)
{
    if (floor > maxFloor)
        return 0;

    ll &ans = dp[floor][pos];
    if (ans != -1)
        return ans;
    ans = 1e18;

    ll target;

    if (pos == 0)
        target = rightMost[floor];
    else
        target = leftMost[floor];

    ll move = abs(target - pos);
    pos = target;

    if (floor == maxFloor)
        return ans = move;

    ll goLeft = move + abs(pos - 0) + 1 +
                solve(floor + 1, 0, maxFloor, leftMost, rightMost, m);

    ll goRight = move + abs(pos - (m + 1)) + 1 +
                 solve(floor + 1, m + 1, maxFloor, leftMost, rightMost, m);

    return ans = min(goLeft, goRight);
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> leftMost(n, m + 1), rightMost(n, 0);

    ll maxFloor = -1;

    for (ll i = n - 1; i >= 0; --i)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < m + 2; j++)
        {
            if (s[j] == '1')
            {
                rightMost[i] = j;
                leftMost[i] = min(leftMost[i], j);
                if (maxFloor == -1)
                    maxFloor = i;
            }
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(0, 0, maxFloor, leftMost, rightMost, m) << endl;
}