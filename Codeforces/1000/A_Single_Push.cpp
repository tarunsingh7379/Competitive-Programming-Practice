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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int flag = 1;
        vector<int> c(n, 0);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                flag = 0;
                break;
            }
            c[i] = b[i] - a[i];
            st.insert(c[i]);
        }
        st.erase(0);
        if (flag == 0 || st.size() > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (st.size() == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                c.push_back(0);
                int cnt = 0;
                for (int i = 0; i < n; i++)
                {
                    if (c[i] != 0 && c[i + 1] == 0)
                    {
                        cnt++;
                    }
                }
                if (cnt == 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        t--;
    }

    return 0;
}