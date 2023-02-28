#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    cout << 4 - st.size() << endl;

    return 0;
}