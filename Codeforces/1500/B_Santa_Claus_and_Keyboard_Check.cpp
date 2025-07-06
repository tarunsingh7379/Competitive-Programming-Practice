#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    set<pair<char, char>> st;
    set<char> used;
    bool ok = true;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
            swap(a[i], b[i]);
        if (!used.count(a[i]) && !used.count(b[i]))
        {
            used.insert(a[i]);
            used.insert(b[i]);
            st.insert({a[i], b[i]});
            if (a[i] != b[i])
                cnt++;
        }
        else if (!st.count({a[i], b[i]}))
        {
            ok = false;
            break;
        }
    }
    if (!ok)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << cnt << endl;
        for (auto num : st)
        {
            if (num.first != num.second)
                cout << num.first << " " << num.second << endl;
        }
    }

    return 0;
}