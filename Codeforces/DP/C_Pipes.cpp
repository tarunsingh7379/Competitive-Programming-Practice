#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_curved(char val)
{
    return val >= '3' && val <= '6';
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
        vector<string> v(2);
        cin >> v[0] >> v[1];
        int row = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (!is_curved(v[row][i]))
            {
                continue;
            }
            if (!is_curved(v[row ^ 1][i]))
            {
                ok = false;
                break;
            }
            row ^= 1;
        }
        if (row != 1)
        {
            ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}