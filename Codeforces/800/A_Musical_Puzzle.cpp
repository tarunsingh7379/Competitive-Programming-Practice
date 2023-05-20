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
        string s;
        cin >> s;
        set<string> st;
        for (int i = 0; i < n - 1; i++)
        {
            st.insert(s.substr(i, 2));
        }
        cout << st.size() << endl;
        t--;
    }

    return 0;
}