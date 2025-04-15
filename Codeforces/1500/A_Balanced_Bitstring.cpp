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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;
        int bal = 0, free = 0;
        for (int i = 0; i < k; i++)
        {
            int cnt0 = 0, cnt1 = 0;
            for (int j = i; j < n; j += k)
            {
                if (s[j] == '1')
                {
                    cnt1++;
                }
                if (s[j] == '0')
                {
                    cnt0++;
                }
            }
            if (cnt1 > 0 && cnt0 > 0)
            {
                ok = false;
                break;
            }
            else
            {
                if (cnt1 > 0)
                {
                    bal++;
                }
                else if (cnt0 > 0)
                {
                    bal--;
                }
                else
                {
                    free++;
                }
            }
        }
        if (free < abs(bal))
        {
            ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}