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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        while (!is_sorted(a.begin(), a.end()))
        {
            int pos = -1;
            int n = a.size();
            for (int i = n - 1; i > 0; i--)
            {
                if (a[i] >= a[i - 1])
                {
                }
                else
                {
                    pos = i - 1;
                    break;
                }
            }
            set<int> st;
            for (int i = 0; i <= pos; i++)
            {
                st.insert(a[i]);
            }
            st.erase(0);
            for (int i = 0; i < n; i++)
            {
                if (st.count(a[i]))
                {
                    a[i] = 0;
                }
            }
            while (a.size() > 0 && a.front() == 0)
            {
                a.erase(a.begin());
            }
            ans = ans + st.size();
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}