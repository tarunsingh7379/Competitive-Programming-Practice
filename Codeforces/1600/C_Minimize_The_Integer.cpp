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
        string s;
        cin >> s;
        string a, b;
        for (auto c : s)
        {
            if ((c - '0') % 2 == 0)
            {
                a.push_back(c);
            }
            else
            {
                b.push_back(c);
            }
        }
        string ans = "";
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        while (i < n && j < m)
        {
            if (a[i] <= b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while (i < n)
        {
            ans.push_back(a[i]);
            i++;
        }
        while (j < m)
        {
            ans.push_back(b[j]);
            j++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}