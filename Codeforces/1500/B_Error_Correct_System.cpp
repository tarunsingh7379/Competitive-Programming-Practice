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
    string a, b;
    cin >> a >> b;
    vector<int> v;
    int ans = 0;
    vector<vector<int>> pos(26, vector<int>(26, -1));
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            v.push_back(i);
            pos[a[i] - 'a'][b[i] - 'a'] = i;
            ans++;
        }
    }
    if (v.empty())
    {
        cout << ans << endl;
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    int l = -1, r = -1;
    for (auto idx : v)
    {
        if (pos[b[idx] - 'a'][a[idx] - 'a'] != -1)
        {
            l = idx;
            r = pos[b[idx] - 'a'][a[idx] - 'a'];
            ans -= 2;
            break;
        }
    }
    if (l != -1)
    {
        cout << ans << endl;
        cout << l + 1 << " " << r + 1 << endl;
        return 0;
    }
    for (auto idx : v)
    {
        for (int i = 0; i < 26; i++)
        {
            if (pos[b[idx] - 'a'][i] != -1)
            {
                l = idx;
                r = pos[b[idx] - 'a'][i];
                ans--;
                break;
            }
        }
        if (l != -1)
        {
            break;
        }
    }
    cout << ans << endl;
    if (l != -1)
        cout << l + 1 << " " << r + 1 << endl;
    else
        cout << l << " " << r << endl;
    return 0;
}