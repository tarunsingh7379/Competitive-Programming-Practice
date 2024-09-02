#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int tot = 1; tot <= 1000; tot++)
    {
        int sum = 0;
        int cnt = 0;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (s[i] - '0');
            if (s[i] == '0')
            {
                x++;
                continue;
            }
            if ((sum - (s[i] - '0')) == tot)
            {
                sum = s[i] - '0';
                cnt++;
            }
        }
        if (x == n)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (sum == tot && cnt > 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}