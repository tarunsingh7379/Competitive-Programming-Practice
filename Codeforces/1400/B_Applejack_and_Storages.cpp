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
    int sum2 = 0, sum4 = 0;
    for (auto num : mp)
    {
        sum2 = sum2 + (num.second) / 2;
        sum4 = sum4 + (num.second) / 4;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char type;
        cin >> type;
        int x;
        cin >> x;
        sum2 -= mp[x] / 2;
        sum4 -= mp[x] / 4;
        if (type == '+')
        {
            mp[x]++;
        }
        else
        {
            mp[x]--;
            if (mp[x] == 0)
            {
                mp.erase(x);
            }
        }
        sum2 += mp[x] / 2;
        sum4 += mp[x] / 4;
        if (sum4 >= 1 && sum2 >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}