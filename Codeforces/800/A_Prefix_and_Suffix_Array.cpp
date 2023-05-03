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
        vector<string> v;
        for (int i = 0; i < 2 * n - 2; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        vector<string> a;
        for (auto s : v)
        {
            if (s.size() == n - 1)
            {
                a.push_back(s);
            }
        }

        reverse(a[0].begin(), a[0].end());

        cout << (a[0] == a[1] ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}