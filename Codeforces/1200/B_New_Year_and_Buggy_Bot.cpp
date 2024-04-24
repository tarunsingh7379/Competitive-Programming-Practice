#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(vector<string> mat, vector<int> a, string s, string op)
{
    ll x = -1, y = -1;
    ll n = mat.size(), m = mat[0].size();

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (mat[i][j] == 'S')
            {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1)
        {
            break;
        }
    }
    ll ind = 0;
    ll i = x, j = y;
    while (ind < op.size() && i < n && i >= 0 && j < m && j >= 0 && mat[i][j] != 'E' && mat[i][j] != '#')
    {
        switch (s[a[op[ind] - '0']])
        {
        case 'U':
            i--;
            break;
        case 'D':
            i++;
            break;
        case 'L':
            j--;
            break;
        case 'R':
            j++;
            break;
        }
        ind++;
    }
    if (i < n && i >= 0 && j < m && j >= 0 && mat[i][j] == 'E')
    {
        return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string op;
    cin >> op;
    ll ans = 0;
    string s = "UDLR";
    vector<int> a = {0, 1, 2, 3};
    do
    {
        if (check(v, a, s, op))
        {
            ans++;
        }

    } while (next_permutation(a.begin(), a.end()));
    cout << ans << endl;
    return 0;
}