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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        vector<int> v(st.begin(), st.end());
        int flag = 1;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if ((v[i + 1] - v[i]) != 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}