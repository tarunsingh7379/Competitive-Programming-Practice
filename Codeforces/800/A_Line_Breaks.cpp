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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int ans = 0, cnt = 0;
        for (auto s : v)
        {
            cnt += s.size();
            if (cnt <= m)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}