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
    int a[n];
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    if (st.size() <= 2)
    {
        cout << "YES" << endl;
    }
    else if (st.size() >= 4)
    {
        cout << "NO" << endl;
    }
    else
    {
        int x = *st.begin();
        st.erase(x);
        int y = *st.begin();
        st.erase(y);
        int z = *st.begin();
        st.erase(z);
        if (2 * y == x + z)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}