#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int left, int right, vector<vector<int>> &prefix, int k)
{
    int x = 0;
    for (int i = 0; i < 30; i++)
    {
        int bit = prefix[right][i];
        if (left - 1 >= 0)
        {
            bit -= prefix[left - 1][i];
        }
        if (bit == (right - left + 1))
        {
            x |= (1 << i);
        }
    }
    return x >= k;
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
        vector<vector<int>> prefix(n, vector<int>(30, 0));
        for (int j = 0; j < 30; j++)
        {
            if (a[0] & (1 << j))
            {
                prefix[0][j]++;
            }
        }
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1];
            for (int j = 0; j < 30; j++)
            {
                if (a[i] & (1 << j))
                {
                    prefix[i][j]++;
                }
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int left, k;
            cin >> left >> k;
            left--;
            int l = left, r = n - 1;
            int right = -2;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (check(left, mid, prefix, k))
                {
                    right = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << right + 1 << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}