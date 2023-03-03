#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    if (s.size() == 2)
    {
        cout << 0 << endl;
        return 0;
    }
    s.erase(s.begin());
    s.insert(s.begin(), ' ');
    s.pop_back();
    stringstream ss(s);
    set<string> st;
    while (ss.good())
    {
        string x;
        getline(ss, x, ',');
        st.insert(x);
    }
    cout << st.size() << endl;
    return 0;
}