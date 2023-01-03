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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 > 0 && !st.count(a[i] - 1))
        {
            st.insert(a[i] - 1);
        }
        else if (!st.count(a[i]))
        {
            st.insert(a[i]);
        }
        else
        {
            st.insert(a[i] + 1);
        }
    }

    cout << st.size() << endl;

    return 0;
}