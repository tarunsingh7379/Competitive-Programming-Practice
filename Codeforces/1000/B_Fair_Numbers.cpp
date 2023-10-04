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
        ll n;
        cin >> n;
        int flag = 1;
        for (ll i = n;; i++)
        {
            string s = to_string(i);
            flag = 1;
            for (auto c : s)
            {
                int d = c - '0';
                if (d != 0 && i % d != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << i << endl;
                break;
            }
        }
        t--;
    }

    return 0;
}