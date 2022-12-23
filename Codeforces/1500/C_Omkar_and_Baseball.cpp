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
        vector<int> ok(n, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == (i + 1))
            {
                ok[i] = 1;
                cnt++;
            }
        }
        if (cnt == n)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> v;
            int i = 0;
            while (i < n)
            {
                if (ok[i] == 1)
                {
                    while (i < n && ok[i] == 1)
                    {
                        i++;
                    }
                    v.push_back(1);
                }
                else
                {
                    while (i < n && ok[i] == 0)
                    {
                        i++;
                    }
                    v.push_back(0);
                }
            }
            if (v.size() == 1)
            {
                cout << 1 << endl;
            }
            else if (v.size() == 2)
            {
                cout << 1 << endl;
            }
            else if (v.size() == 3 && v[1] == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        t--;
    }

    return 0;
}