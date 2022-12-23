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
        vector<int> a(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        string s;
        cin >> s;
        int flag = 1;
        for (auto num : mp)
        {
            set<char> st;
            for (auto ind : num.second)
            {
                st.insert(s[ind]);
            }
            if (st.size() != 1)
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}