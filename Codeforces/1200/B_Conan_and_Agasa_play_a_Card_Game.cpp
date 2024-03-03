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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v;
    for (auto num : mp)
    {
        v.push_back({num.first, num.second});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int ans = 0;
    for (auto num : v)
    {
        if (num.second % 2)
        {
            ans = 1;
            break;
        }
    }
    if (ans)
    {
        cout << "Conan" << endl;
    }
    else
    {
        cout << "Agasa" << endl;
    }

    return 0;
}