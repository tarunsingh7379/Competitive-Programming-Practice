#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]]++;
    }
    int ans = -1;
    for (auto num : mp1)
    {
        if (num.second >= 2)
        {
            ans = 0;
            break;
        }
    }
    if (ans != -1)
    {
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int x = a[i] & k;
            if (x != a[i] && mp1[x] > 0)
            {
                ans = 1;
                break;
            }
            mp2[x]++;
        }
        if (ans != -1)
        {
            cout << ans << endl;
        }
        else
        {
            for (auto num : mp2)
            {
                if (num.second >= 2)
                {
                    ans = 2;
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}