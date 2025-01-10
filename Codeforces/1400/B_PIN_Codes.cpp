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
        vector<string> a;
        map<string, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a.push_back(s);
            mp[s].push_back(i);
        }
        set<string> st;
        for (auto num : mp)
        {
            st.insert(num.first);
        }
        int ans = 0;
        for (auto num : mp)
        {
            ans += (num.second.size() - 1);
            for (int i = 1; i < num.second.size(); i++)
            {
                int ind = num.second[i];
                int done = 0;
                for (int j = 0; j < a[ind].size(); j++)
                {
                    char c = a[ind][j];
                    for (int k = 0; k < 10; k++)
                    {
                        if (a[ind][j] - '0' != k)
                        {
                            a[ind][j] = k + '0';
                            if (st.count(a[ind]))
                            {
                                a[ind][j] = c;
                            }
                            else
                            {
                                done = 1;
                                st.insert(a[ind]);
                                break;
                            }
                        }
                    }
                    if (done)
                    {
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
        for (auto s : a)
        {
            cout << s << endl;
        }
        t--;
    }

    return 0;
}