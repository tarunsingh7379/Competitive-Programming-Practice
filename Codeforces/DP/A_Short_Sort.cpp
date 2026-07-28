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
        int n = s.size();
        bool ok = s == "abc";
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(s[i], s[j]);
                if (s == "abc")
                {
                    ok = true;
                }
                swap(s[i], s[j]);
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}