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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = -1;
    }
    int q;
    cin >> q;
    vector<int> op(q, 0);
    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int p, x;
            cin >> p >> x;
            p--;
            v[p].first = x;
            v[p].second = i;
        }
        else
        {
            int x;
            cin >> x;
            op[i] = x;
        }
    }
    for (int i = q - 2; i >= 0; i--)
    {
        op[i] = max(op[i], op[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].second + 1 < q)
        {
            v[i].first = max(v[i].first, op[v[i].second + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " ";
    }
    cout << endl;

    return 0;
}