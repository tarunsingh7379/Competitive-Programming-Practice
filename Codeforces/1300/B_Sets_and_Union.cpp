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
        vector<vector<int>> v;
        set<int> st1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vector<int> temp;
            for (int j = 0; j < x; j++)
            {
                int y;
                cin >> y;
                temp.push_back(y);
                st1.insert(y);
            }
            v.push_back(temp);
        }
        int ans = 0;
        vector<int> a(st1.begin(), st1.end());
        for (int i : a)
        {
            int flag = 0;
            set<int> st;
            for (auto num : v)
            {
                flag = 0;
                for (auto x : num)
                {
                    if (x == i)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    for (auto x : num)
                    {
                        st.insert(x);
                    }
                }
            }
            ans = max(ans, (int)st.size());
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}