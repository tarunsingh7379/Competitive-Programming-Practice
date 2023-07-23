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
    string s;
    cin >> s;

    string ans = "";
    int ma = 0;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            int cnt = 0;
            for (int k = 0; k < n - 1; k++)
            {
                if (s[k] == i && s[k + 1] == j)
                {
                    cnt++;
                }
            }
            if (cnt > ma)
            {
                ma = cnt;
                ans = "";
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    cout << ans << endl;

    return 0;
}