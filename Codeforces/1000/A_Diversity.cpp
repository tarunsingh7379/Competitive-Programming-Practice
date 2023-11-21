#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int k;
    cin >> k;

    set<char> st(s.begin(), s.end());
    int sz = st.size(), n = s.size();
    int ans = max(0, k - sz);
    if (ans <= n - sz)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "impossible" << endl;
    }

    return 0;
}