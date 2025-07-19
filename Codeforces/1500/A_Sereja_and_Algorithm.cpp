#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> prefix_x(n, 0), prefix_y(n, 0), prefix_z(n, 0);
    prefix_x[0] = (s[0] == 'x');
    prefix_y[0] = (s[0] == 'y');
    prefix_z[0] = (s[0] == 'z');
    for (int i = 1; i < n; i++)
    {
        prefix_x[i] = prefix_x[i - 1] + (s[i] == 'x');
        prefix_y[i] = prefix_y[i - 1] + (s[i] == 'y');
        prefix_z[i] = prefix_z[i - 1] + (s[i] == 'z');
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int x = prefix_x[r];
        int y = prefix_y[r];
        int z = prefix_z[r];
        if (l - 1 >= 0)
        {
            x -= prefix_x[l - 1];
            y -= prefix_y[l - 1];
            z -= prefix_z[l - 1];
        }
        if (r - l + 1 <= 2)
        {
            cout << "YES" << endl;
        }
        else if (abs(x - y) > 1 || abs(x - z) > 1 || abs(y - z) > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}