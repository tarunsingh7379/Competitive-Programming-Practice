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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int ans = 0;
    while (!st.empty())
    {
        int x = *st.begin();
        if (x >= (ans + 1))
        {
            ans++;
        }
        st.erase(st.begin());
    }
    cout << ans << endl;

    return 0;
}