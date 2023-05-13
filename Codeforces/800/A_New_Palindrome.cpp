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
        string s;
        cin >> s;
        int n = s.size();
        set<char> st(s.begin(), s.begin() + n / 2);
        cout << (st.size() > 1 ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}