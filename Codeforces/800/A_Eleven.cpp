#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// 1 1 2 3 5 8
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    set<int> st;
    int a = 1, b = 1, c = 0;
    while (b <= n)
    {
        st.insert(b);
        c = a + b;
        a = b;
        b = c;
    }

    string ans = string(n, 'o');
    for (auto num : st)
    {
        ans[num - 1] = 'O';
    }
    cout << ans << endl;

    return 0;
}