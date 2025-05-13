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
    int ans = n - 1;
    for (int i = 0; i < n; i++)
    {
        map<int, int> mp;
        bool valid = true;
        for (int j = 0; j < i; j++)
        {
            mp[a[j]]++;
            if (mp[a[j]] == 2)
            {
                valid = false;
                break;
            }
        }
        int suffix_ind = n;
        for (int j = n - 1; j >= i; j--)
        {
            mp[a[j]]++;
            if (mp[a[j]] == 1)
            {
                suffix_ind = j;
            }
            else
            {
                break;
            }
        }
        if (valid)
        {
            ans = min(ans, suffix_ind - i);
        }
    }
    cout << ans << endl;

    return 0;
}