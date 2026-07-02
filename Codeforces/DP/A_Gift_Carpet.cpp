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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        bool ok = false;
        string req = "vika";
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == req[k])
                {
                    k++;
                    break;
                }
            }
            if (k == 4)
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}