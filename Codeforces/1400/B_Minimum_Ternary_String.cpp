#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int cnt = 0;
    for (auto c : s)
    {
        if (c == '1')
        {
            cnt++;
        }
    }
    string ans;
    int first = 1;
    for (auto c : s)
    {
        if (c == '0')
        {
            ans.push_back(c);
        }
        else if (c == '2')
        {
            if (first)
            {
                for (int j = 0; j < cnt; j++)
                {
                    ans.push_back('1');
                }
                ans.push_back('2');
                first = 0;
            }
            else
            {
                ans.push_back('2');
            }
        }
    }
    if (first)
    {
        for (int j = 0; j < cnt; j++)
        {
            ans.push_back('1');
        }
    }
    cout << ans << endl;
    return 0;
}