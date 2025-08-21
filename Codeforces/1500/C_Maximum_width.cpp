#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    vector<int> left, right;
    int ind = 0;
    for (int i = 0; i < m; i++)
    {
        while (ind < n && a[ind] != b[i])
        {
            ind++;
        }
        left.push_back(ind);
        ind++;
    }
    ind = n - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        while (ind >= 0 && a[ind] != b[i])
        {
            ind--;
        }
        right.push_back(ind);
        ind--;
    }
    reverse(right.begin(), right.end());
    int ans = 0;
    for (ll i = 0; i < m - 1; i++)
    {
        ans = max(ans, right[i + 1] - left[i]);
    }
    cout << ans << endl;

    return 0;
}