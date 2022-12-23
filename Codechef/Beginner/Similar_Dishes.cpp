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
        set<string> st;
        for (int i = 0; i < 4; i++)
        {
            string s;
            cin >> s;
            st.insert(s);
        }
        vector<string> v;
        for (int i = 0; i < 4; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int cnt = 0;
        for (auto num : v)
        {
            if (st.count(num))
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            cout << "similar" << endl;
        }
        else
        {
            cout << "dissimilar" << endl;
        }
        t--;
    }

    return 0;
}