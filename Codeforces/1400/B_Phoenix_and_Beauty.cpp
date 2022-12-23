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
        int n, k;
        cin >> n >> k;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        if (st.size() > k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n * k << endl;
            for (int i = 0; i < n; i++)
            {
                for (auto x : st)
                {
                    cout << x << " ";
                }
                for (int j = 0; j < k - st.size(); j++)
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}