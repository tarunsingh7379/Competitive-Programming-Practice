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
    for (int len = 1; len <= 9; len++)
    {
        for (int x = 0; x <= 9; x++)
        {
            for (int y = 0; y <= 9; y++)
            {
                for (int i = 0; i < (1 << len); i++)
                {
                    string s = "";
                    for (int j = 0; j < len; j++)
                    {
                        if (i & (1 << j))
                            s.push_back(x + '0');
                        else
                            s.push_back(y + '0');
                    }
                    st.insert(stoi(s));
                }
            }
        }
    }
    st.insert(1e9);
    auto it = st.upper_bound(n);
    it--;
    int ans = distance(st.begin(), it);
    cout << ans << endl;

    return 0;
}