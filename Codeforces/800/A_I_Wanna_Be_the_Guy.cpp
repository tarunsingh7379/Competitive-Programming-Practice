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
    int sz;
    cin >> sz;
    set<int> st;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << (st.size() == n ? "I become the guy." : "Oh, my keyboard! ") << endl;
    return 0;
}