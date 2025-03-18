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
        string s;
        cin >> s;
        int n = s.size();
        vector<int> ans;
        string x;
        for (int i = 0; i <= n - 3; i++)
        {
            x = s.substr(i, 3);
            if (x == "two")
            {
                if (i + 3 < n && s[i + 3] == 'o')
                {
                    ans.push_back(i + 1);
                }
                else
                {
                    ans.push_back(i + 2);
                }
                i += 2;
            }
            else if (x == "one")
            {
                ans.push_back(i + 1);
                i += 2;
            }
        }
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num + 1 << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}