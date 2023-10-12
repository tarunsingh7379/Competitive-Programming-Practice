#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<char> st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');

    string a, b;
    cin >> a >> b;
    int n = a.size();
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if ((st.count(a[i]) && st.count(b[i])) || (!st.count(a[i]) && !st.count(b[i])))
            {
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (a.size() != b.size())
    {
        flag = 0;
    }
    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}