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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans(n, 0), freq(n + 1, 0), last_used(n + 1, 0);
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        int x = n - a[i];
        int y = last_used[x];
        if (y != 0 && freq[y] == x)
        {
            y = ++cur;
        }
        if (y == 0)
        {
            y = ++cur;
        }
        ans[i] = y;
        freq[y]++;
        last_used[x] = y;
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (freq[ans[i]] != (n - a[i]))
        {
            ok = false;
            break;
        }
    }
    if (!ok)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        cout << "Possible" << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}