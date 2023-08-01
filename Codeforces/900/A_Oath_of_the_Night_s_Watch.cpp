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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[0] && v[i] < v[n - 1])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}