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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        vector<string> v(k);
        if (s[0] != s[k - 1])
        {
            cout << s[k - 1] << endl;
        }
        else
        {
            if (s[k] != s[n - 1])
            {
                cout << s[0];
                cout << s.substr(k) << endl;
            }
            else
            {
                cout << s[0];
                int d = (n - k + k - 1) / k;
                for (int i = 0; i < d; i++)
                {
                    cout << s[k];
                }
                cout << endl;
            }
        }
        t--;
    }

    return 0;
}