#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int x, vector<int> &a)
{
    int pos = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > x)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        while (!is_sorted(a.begin(), a.end()))
        {
            int pos = func(x, a);
            if (pos == -1)
            {
                break;
            }
            swap(a[pos], x);
            ans++;
        }
        if (is_sorted(a.begin(), a.end()))
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}