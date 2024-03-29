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
        int b[n];
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            st.insert(b[i]);
        }

        vector<int> ans(2 * n, 0);
        set<int> rem;
        for (int i = 1; i <= 2 * n; i++)
        {
            st.insert(i);
        }
        int ind = 0;
        for (int i = 0; i < 2 * n; i += 2)
        {
            ans[i] = b[ind++];
            st.erase(ans[i]);
        }
        while (!st.empty())
        {
            int x = *st.begin();
            st.erase(x);
            for (int i = 1; i < 2 * n; i += 2)
            {
                if (ans[i] == 0 && x > ans[i - 1])
                {
                    ans[i] = x;
                    break;
                }
            }
        }
        int flag = 1;
        for (auto num : ans)
        {
            if (num == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        t--;
    }

    return 0;
}