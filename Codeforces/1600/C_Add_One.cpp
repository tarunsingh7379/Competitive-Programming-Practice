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

    int a[10][200005];
    for (int i = 0; i <= 9; i++)
    {
        vector<int> fr(10, 0);
        fr[i] = 1;
        vector<int> copy(10, 0);
        for (int j = 1; j <= 200001; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                copy[k] = 0;
            }
            for (int k = 0; k < 9; k++)
            {
                copy[k + 1] = fr[k];
            }
            copy[0] = fr[9];
            copy[1] = (copy[1] + fr[9]) % M;
            fr = copy;
            a[i][j] = 0;
            for (int k = 0; k <= 9; k++)
            {
                a[i][j] = (a[i][j] + fr[k]) % M;
            }
        }
    }

    while (t)
    {
        int n, m;
        cin >> n >> m;
        string s = to_string(n);
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - '0';
            ans = (ans + a[x][m]) % M;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}