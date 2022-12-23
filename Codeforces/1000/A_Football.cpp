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
    map<string, int> mp;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        st.insert(s);
    }
    vector<string> v(st.begin(), st.end());
    if (v.size() == 1)
    {
        cout << v[0] << endl;
    }
    else if (mp[v[0]] > mp[v[1]])
    {
        cout << v[0] << endl;
    }
    else
    {
        cout << v[1] << endl;
    }

    return 0;
}