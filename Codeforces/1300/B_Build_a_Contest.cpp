#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        mp[a[i]]++;
        if (mp.size() == n)
        {
            cout << 1;
            for (int j = 1; j <= n; j++)
            {
                mp[j]--;
                if (mp[j] == 0)
                {
                    mp.erase(j);
                }
            }
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}