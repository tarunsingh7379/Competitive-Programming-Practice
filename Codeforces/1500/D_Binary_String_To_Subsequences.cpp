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
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> ans(n, 0);
        set<int> st1, st2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (!st2.empty())
                {
                    int x = *st2.begin();
                    st2.erase(st2.begin());
                    ans[i] = x;
                    st1.insert(x);
                }
                else
                {
                    cnt++;
                    st1.insert(cnt);
                    ans[i] = cnt;
                }
            }
            else
            {
                if (!st1.empty())
                {
                    int x = *st1.begin();
                    st1.erase(st1.begin());
                    ans[i] = x;
                    st2.insert(x);
                }
                else
                {
                    cnt++;
                    st2.insert(cnt);
                    ans[i] = cnt;
                }
            }
        }
        cout << st1.size() + st2.size() << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}