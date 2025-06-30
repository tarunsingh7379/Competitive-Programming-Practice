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
    set<string> st;
    string ans = s;
    while (!st.count(s))
    {
        st.insert(s);
        while (s[n - 1] != '0')
        {
            for (int i = 0; i < n; i++)
            {
                s[i] = (s[i] + 1);
                if (s[i] > '9')
                    s[i] = '0';
            }
        }
        rotate(s.begin(), s.begin() + n - 1, s.end());
        ans = min(ans, s);
    }
    cout << ans << endl;
    return 0;
}