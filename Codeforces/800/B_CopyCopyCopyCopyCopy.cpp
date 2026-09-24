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
        cout << st.size() << endl;
        t--;
    }

    return 0;
}