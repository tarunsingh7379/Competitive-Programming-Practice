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
    int x = (n - 11) / 2, y = (n - 11) / 2;
    string ans = "";
    for (auto c : s)
    {
        if (c == '8')
        {
            if (x)
            {
                x--;
            }
            else
            {
                ans.push_back(c);
            }
        }
        else
        {
            if (y)
            {
                y--;
            }
            else
            {
                ans.push_back(c);
            }
        }
    }
    if (ans[0] == '8')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}