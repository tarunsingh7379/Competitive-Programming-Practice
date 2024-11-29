#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int pr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                if (a[i] % pr[j] == 0)
                {
                    mp[pr[j]]++;
                    break;
                }
            }
        }
        cout << mp.size() << endl;
        int cnt = 1;
        for (auto &num : mp)
        {
            num.second = cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            for (auto x : mp)
            {
                if (a[i] % x.first == 0)
                {
                    cout << x.second << " ";
                    break;
                }
            }
        }
        cout << endl;

        t--;
    }

    return 0;
}