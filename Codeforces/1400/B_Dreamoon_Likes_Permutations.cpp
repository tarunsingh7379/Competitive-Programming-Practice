#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int first, vector<int> &a)
{
    vector<int> v1, v2;
    for (int i = 0; i < first; i++)
    {
        v1.push_back(a[i]);
    }
    for (int i = first; i < a.size(); i++)
    {
        v2.push_back(a[i]);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 1; i < v1.size(); i++)
    {
        if (v1[i] != v1[i - 1] + 1)
        {
            return false;
        }
    }
    for (int i = 1; i < v2.size(); i++)
    {
        if (v2[i] != v2[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int ma = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ma = max(ma, a[i]);
        }
        vector<pair<int, int>> ans;
        if (check(ma, a))
        {
            ans.push_back({ma, n - ma});
        }
        if (check(n - ma, a))
        {
            ans.push_back({n - ma, ma});
        }
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num.first << " " << num.second << endl;
        }
        t--;
    }

    return 0;
}