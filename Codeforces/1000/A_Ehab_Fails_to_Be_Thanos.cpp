#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> st;
    int n;
    cin >> n;
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    if (st.size() == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(a, a + 2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}