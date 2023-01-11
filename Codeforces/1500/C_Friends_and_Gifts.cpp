#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        st.insert(i);
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.erase(a[i]);
    }
    set<int> notSafe;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (st.count(i + 1))
            {
                notSafe.insert(i + 1);
                st.erase(i + 1);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (!notSafe.count(i + 1))
            {
                int x = *st.begin();
                a[i] = x;
                st.erase(x);
            }
        }
    }
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (flag == 1)
            {
                int x = *notSafe.rbegin();
                a[i] = x;
                flag = 0;
                notSafe.erase(x);
            }
            else
            {
                int x = *notSafe.begin();
                a[i] = x;
                notSafe.erase(x);
            }
        }
    }

    for (auto num : a)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}