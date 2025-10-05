#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_ind(int start, int k, char &c, string &s)
{
    set<char> st;
    int ind = s.size();
    vector<int> freq(k, 0);
    for (int i = start; i < s.size(); i++)
    {
        if (!st.count(s[i]))
        {
            st.insert(s[i]);
            ind = i;
        }
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < k; i++)
    {
        if (freq[i] == 0)
        {
            c = i + 'a';
            return s.size();
        }
    }
    return ind;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;
        string ans = "";
        int ind = 0;
        char c = 'a';
        while (ind < m)
        {
            ind = get_ind(ind, k, c, s);
            if (ind != m)
            {
                ans.push_back(s[ind]);
            }
            ind++;
        }
        if (ans.size() < n)
        {
            int len = n - ans.size();
            cout << "NO" << endl;
            cout << ans << string(len, c) << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        t--;
    }

    return 0;
}