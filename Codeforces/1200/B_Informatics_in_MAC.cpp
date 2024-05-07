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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> prefix(n, 0);
        int mex = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            while (mp[mex])
            {
                mex++;
            }
            prefix[i] = mex;
        }
        mex = 0;
        map<int, int> mp1;
        vector<int> suffix(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            mp1[a[i]]++;
            while (mp1[mex])
            {
                mex++;
            }
            suffix[i] = mex;
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (prefix[i] == suffix[i + 1])
            {
                flag = 1;
                cout << 2 << endl;
                cout << 1 << " " << i + 1 << endl;
                cout << i + 2 << " " << n << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}