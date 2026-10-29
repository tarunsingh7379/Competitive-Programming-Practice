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
        string ans;
        int cnt = 0;
        while (n >= 28)
        {
            ans.push_back('z');
            n -= 26;
            cnt++;
        }
        if (n > 0)
        {
            if (cnt == 0)
            {
                char c = 'a' + (n - 2) - 1;
                ans.push_back('a');
                ans.push_back('a');
                ans.push_back(c);
            }
            else if (cnt == 1)
            {
                char c = 'a' + (n - 1) - 1;
                ans.push_back('a');
                ans.push_back(c);
            }
            else if (cnt == 2)
            {
                char c = 'a' + n - 1;
                ans.push_back(c);
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
        t--;
    }

    return 0;
}