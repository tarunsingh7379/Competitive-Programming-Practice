#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    k = k / 2;
    ll left = 0, right = 0;
    string ans = "";
    for (auto c : s)
    {
        if (c == '(')
        {
            if (left < k)
            {
                left++;
                ans.push_back('(');
            }
        }
        else
        {
            if (right < left && right < k)
            {
                right++;
                ans.push_back(')');
            }
        }
    }
    cout << ans << endl;

    return 0;
}