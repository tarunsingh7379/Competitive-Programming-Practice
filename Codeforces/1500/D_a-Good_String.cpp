#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int l, int r, int c, string &s)
{
    if (l == r)
    {
        if (s[l] == (c + 'a'))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    int mid = (l + r) / 2;
    int ans = INT_MAX;
    int cost = 0;
    for (int i = mid + 1; i <= r; i++)
    {
        if (s[i] != (c + 'a'))
        {
            cost++;
        }
    }
    ans = min(ans, cost + func(l, mid, c + 1, s));
    cost = 0;
    for (int i = l; i <= mid; i++)
    {
        if (s[i] != (c + 'a'))
        {
            cost++;
        }
    }
    ans = min(ans, cost + func(mid + 1, r, c + 1, s));
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << func(0, n - 1, 0, s) << endl;
        t--;
    }

    return 0;
}