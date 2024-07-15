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
    stack<char> st;
    int ans = 0;
    if (n % 2)
    {
        cout << -1 << endl;
    }
    else
    {
        int cnt = 0;
        for (auto c : s)
        {
            if (c == '(')
            {
                cnt++;
            }
        }
        if (cnt != n / 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int st = 0, sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (sum == 0 && s[i] == ')')
                {
                    st = i;
                }
                if (sum == -1 && s[i] == '(')
                {
                    ans += (i - st + 1);
                }
                if (s[i] == '(')
                {
                    sum++;
                }
                else
                {
                    sum--;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}