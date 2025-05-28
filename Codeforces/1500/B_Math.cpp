#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> mp;
    int temp = n;
    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (temp % i == 0)
        {
            temp /= i;
            cnt++;
        }
        if (cnt)
        {
            mp[i] = cnt;
        }
    }
    if (temp != 1)
    {
        mp[temp] = 1;
    }
    int op = 0, ans = 1;
    int ma = 0;
    for (auto num : mp)
    {
        ma = max(ma, num.second);
    }
    int freq = 0;
    for (auto num : mp)
    {
        if (num.second == ma)
        {
            freq++;
        }
    }
    if (!mp.empty())
    {
        for (int i = 0; i < 25; i++)
        {
            if (ma == (1 << i))
            {
                op = i;
                if (mp.size() != freq)
                {
                    op++;
                }
                break;
            }
            if (ma < (1 << i))
            {
                op = i + 1;
                break;
            }
        }
    }

    for (auto num : mp)
    {
        ans *= num.first;
    }
    cout << ans << " " << op << endl;

    return 0;
}