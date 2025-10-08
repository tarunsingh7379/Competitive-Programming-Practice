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
    map<int, int> mp1, mp2;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp1[x] = y;
        mp2[y] = x;
        freq[x]++;
        freq[y]++;
    }
    vector<int> ans(n, 0);
    for (auto num : freq)
    {
        if (num.second == 1)
        {
            if (mp1.find(num.first) != mp1.end())
            {
                ans[0] = num.first;
            }
            else
            {
                ans[n - 1] = num.first;
            }
        }
    }
    ans[1] = mp1[0];
    for (int i = 2; i < n - 1; i++)
    {
        ans[i] = mp1[ans[i - 2]];
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}