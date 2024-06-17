#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int k, vector<int> &a)
{
    vector<int> freq(20, 0);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (a[i] & (1 << j))
            {
                freq[j]++;
            }
        }
    }
    set<int> ans;
    int temp = 0;
    for (int i = 0; i < 20; i++)
    {
        if (freq[i])
        {
            temp |= (1 << i);
        }
    }
    ans.insert(temp);
    for (int i = k; i < a.size(); i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (a[i - k] & (1 << j))
            {
                freq[j]--;
            }
        }
        for (int j = 0; j < 20; j++)
        {
            if (a[i] & (1 << j))
            {
                freq[j]++;
            }
        }
        temp = 0;
        for (int i = 0; i < 20; i++)
        {
            if (freq[i])
            {
                temp |= (1 << i);
            }
        }
        ans.insert(temp);
    }
    return (ans.size() == 1);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 1, r = n, ans = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, a))
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}