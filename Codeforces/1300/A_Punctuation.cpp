#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    string ans;
    int space_cnt = 0;
    char punct = 'a';
    for (auto c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (punct != 'a')
            {
                ans.push_back(punct);
                punct = 'a';
                ans.push_back(' ');
            }
            else if (space_cnt > 0)
            {
                ans.push_back(' ');
            }
            ans.push_back(c);
            space_cnt = 0;
        }
        else if (c == ' ')
        {
            space_cnt++;
        }
        else
        {
            punct = c;
            space_cnt = 0;
        }
    }
    cout << ans << endl;

    return 0;
}