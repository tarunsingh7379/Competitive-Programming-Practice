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
        string a, b;
        cin >> a >> b;
        string ans = "";
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(a[i]);
            if (i + 1 < n)
            {
                if (a[i + 1] < b[i])
                {
                    cnt = 1;
                }
                else if (b[i] < a[i + 1])
                {
                    for (int j = i; j < n; j++)
                    {
                        ans.push_back(b[j]);
                    }
                    break;
                }
                else
                {
                    cnt++;
                }
            }
            else
            {
                ans.push_back(b[n - 1]);
            }
        }
        cout << ans << endl;
        cout << cnt << endl;
        t--;
    }

    return 0;
}