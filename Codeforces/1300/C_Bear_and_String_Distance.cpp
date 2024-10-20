#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans;
    for (auto c : s)
    {
        int d1 = 'z' - c;
        int d2 = c - 'a';
        if (max(d1, d2) < k)
        {
            if (d1 >= d2)
            {
                ans.push_back('z');
                k -= d1;
            }
            else
            {
                ans.push_back('a');
                k -= d2;
            }
        }
        else
        {
            if (d1 >= d2)
            {
                ans.push_back(c + k);
            }
            else
            {
                ans.push_back(c - k);
            }
            k = 0;
            break;
        }
    }
    if (k == 0)
    {
        for (int i = ans.size(); i < n; i++)
        {
            ans.push_back(s[i]);
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}