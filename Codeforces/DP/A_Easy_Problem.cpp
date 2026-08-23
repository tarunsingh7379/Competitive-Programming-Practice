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
        set<pair<int, int>> st;
        for (int i = 1; i < n; i++)
        {
            st.insert({i, n - i});
        }
        cout << st.size() << endl;
        t--;
    }

    return 0;
}