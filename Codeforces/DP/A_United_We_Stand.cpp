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
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int num = -1;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            ok = true;
            for (int j = 0; j < n; j++)
            {
                if (a[i] != a[j] && a[i] % a[j] == 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                num = a[i];
        }
        if (num == -1 || mp[num] == n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mp[num] << " " << n - mp[num] << endl;
            for (int i = 0; i < mp[num]; i++)
            {
                cout << num << " ";
            }
            cout << endl;
            for (auto x : mp)
            {
                if (x.first == num)
                    continue;
                for (int i = 0; i < x.second; i++)
                {
                    cout << x.first << " ";
                }
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}