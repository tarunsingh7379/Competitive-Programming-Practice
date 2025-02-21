#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_sum(string &s, int start, int mid)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (start + i < mid)
        {
            sum += s[i] - '0';
        }
        else
        {
            sum -= s[i] - '0';
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v;
    vector<string> a[6];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a[s.size()].push_back(s);
    }
    ll ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((i + j) % 2 != 0)
                continue;
            map<ll, ll> mp;
            int len = i + j;
            int half = len / 2;
            for (auto s : a[i])
            {
                int sum = get_sum(s, 0, half);
                mp[sum]++;
            }
            for (auto s : a[j])
            {
                int sum = get_sum(s, i, half);
                ans += mp[-sum];
            }
        }
    }
    cout << ans << endl;

    return 0;
}