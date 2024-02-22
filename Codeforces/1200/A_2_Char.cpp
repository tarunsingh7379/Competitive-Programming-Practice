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
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int flag = 1;
    int ans = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            int cnt = 0;
            for (auto s : v)
            {
                flag = 1;
                for (auto c : s)
                {
                    if (c != i && c != j)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    cnt += s.size();
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}