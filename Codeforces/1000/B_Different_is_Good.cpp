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
    string s;
    cin >> s;
    if (n > 26)
    {
        cout << -1 << endl;
    }
    else
    {
        set<char> st(s.begin(), s.end());
        cout << n - st.size() << endl;
    }

    return 0;
}