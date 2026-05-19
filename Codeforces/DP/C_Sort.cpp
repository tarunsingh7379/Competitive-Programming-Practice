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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> v1(n, vector<int>(26, 0)), v2(n, vector<int>(26, 0));
        for (int i = 0; i < n; i++)
        {
            if (i - 1 >= 0)
            {
                v1[i] = v1[i - 1];
                v2[i] = v2[i - 1];
            }
            v1[i][a[i] - 'a']++;
            v2[i][b[i] - 'a']++;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            vector<int> first, second;
            first = v1[r];
            second = v2[r];
            if (l - 1 >= 0)
            {
                for (int i = 0; i < 26; i++)
                {
                    first[i] -= v1[l - 1][i];
                    second[i] -= v2[l - 1][i];
                }
            }
            int cost = 0;
            for (int i = 0; i < 26; i++)
            {
                cost += abs(first[i] - second[i]);
            }
            cout << cost / 2 << endl;
        }
        t--;
    }

    return 0;
}