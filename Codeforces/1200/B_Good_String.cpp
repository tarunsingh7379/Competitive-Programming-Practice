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
        string s;
        cin >> s;
        int left = -1, right = -1;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '>')
            {
                left = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '<')
            {
                right = i;
                break;
            }
        }
        if (left == -1 || right == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min(left, n - 1 - right) << endl;
        }
        t--;
    }

    return 0;
}