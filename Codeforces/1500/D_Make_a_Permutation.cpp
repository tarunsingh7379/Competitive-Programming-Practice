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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (!freq[i])
        {
            v.push_back(i);
        }
    }
    int l = 0, r = v.size() - 1;
    int ans = 0;
    vector<int> vis(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] > 1 && (a[i] > v[l] || vis[a[i]] == 1))
        {
            freq[a[i]]--;
            a[i] = v[l];
            l++;
            ans++;
        }
        vis[a[i]] = 1;
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}