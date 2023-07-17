#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;
    string s;
    cin >> s;
    string ans = "";
    string ori = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if (c == 'L')
    {
        for (auto x : s)
        {
            int ind = -1;
            for (int i = 0; i < ori.size(); i++)
            {
                if (ori[i] == x)
                {
                    ind = i;
                    break;
                }
            }
            ans.push_back(ori[ind + 1]);
        }
    }
    else
    {
        for (auto x : s)
        {
            int ind = -1;
            for (int i = 0; i < ori.size(); i++)
            {
                if (ori[i] == x)
                {
                    ind = i;
                    break;
                }
            }
            ans.push_back(ori[ind - 1]);
        }
    }
    cout << ans << endl;

    return 0;
}