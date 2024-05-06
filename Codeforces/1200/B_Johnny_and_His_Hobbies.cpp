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
        int a[n];
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        int ans = -1;
        for (int i = 1; i <= 2000; i++)
        {
            set<int> st1;
            for (int j = 0; j < n; j++)
            {
                st1.insert(a[j] ^ i);
            }
            if (st1 == st)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}