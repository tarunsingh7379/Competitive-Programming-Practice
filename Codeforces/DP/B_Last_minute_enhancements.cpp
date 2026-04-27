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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.count(a[i]) && st.count(a[i] + 1) == 0)
            {
                st.insert(a[i] + 1);
            }
            else
            {
                st.insert(a[i]);
            }
        }
        cout << st.size() << endl;
        t--;
    }

    return 0;
}