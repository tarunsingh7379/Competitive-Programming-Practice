#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, m;
    cin >> n >> k >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i] % m].push_back(a[i]);
    }
    int flag = 0;
    for (auto num : mp)
    {
        if (num.second.size() >= k)
        {
            cout << "Yes" << endl;
            for (auto x : num.second)
            {
                cout << x << " ";
                k--;
                if (k == 0)
                    return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}