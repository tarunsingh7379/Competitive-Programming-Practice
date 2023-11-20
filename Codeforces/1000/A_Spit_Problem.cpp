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
    int flag = 0;
    map<int, set<int>> mp1;
    map<int, vector<int>> mp2;
    for (int i = 0; i < n; i++)
    {
        int x, d;
        cin >> x >> d;
        mp1[x].insert(x + d);
        mp2[x].push_back(x + d);
    }
    for (auto num : mp2)
    {
        for (auto x : num.second)
        {
            if (mp1[x].count(num.first))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}