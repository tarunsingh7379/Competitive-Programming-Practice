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
    vector<int> suffix(n, INT_MAX);
    suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = min(a[i], suffix[i + 1]);
    }
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        int ind = lower_bound(suffix.begin() + i, suffix.end(), a[i]) - suffix.begin();
        ind--;
        if (ind >= 0 && ind > i)
        {
            ans[i] = ind - i - 1;
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}