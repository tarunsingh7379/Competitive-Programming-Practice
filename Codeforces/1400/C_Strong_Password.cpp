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
        int m;
        cin >> m;
        string a, b;
        cin >> a >> b;
        int n = s.size();
        int last_ind = 0;
        for (int i = 0; i < m; i++)
        {
            int z = last_ind;
            for (int j = a[i] - '0'; j <= b[i] - '0'; j++)
            {
                int cur_ind = last_ind;
                while (cur_ind < n && (s[cur_ind] - '0') != j)
                {
                    cur_ind++;
                }
                z = max(z, cur_ind);
            }
            last_ind = z + 1;
        }
        cout << (last_ind > n ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}