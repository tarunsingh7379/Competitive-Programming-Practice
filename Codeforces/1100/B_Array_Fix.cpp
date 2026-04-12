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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> last;
        last.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > last.back())
            {
                if (a[i] >= 10)
                {
                    last.push_back(a[i] % 10);
                    last.push_back(a[i] / 10);
                }
                else
                {
                    last.push_back(a[i]);
                }
            }
            else
            {
                last.push_back(a[i]);
            }
        }
        reverse(last.begin(), last.end());
        if (is_sorted(last.begin(), last.end()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}