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
    string ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {
                ans.push_back(s[j]);
            }
            break;
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}