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
    string ans = "";
    bool found = false;
    bool start = false;
    bool ok = true;
    for (auto c : s)
    {
        ans.push_back(c);
        if (c == '@')
        {
            if (!start || found)
            {
                ok = false;
                break;
            }
            found = true;
        }
        else
        {
            if (!start)
            {
                start = true;
            }
            if (found)
            {
                found = false;
                start = false;
                ans.push_back(',');
            }
        }
    }
    if (ok)
    {
        if (ans.back() == ',')
        {
            ans.pop_back();
            cout << ans << endl;
        }
        else
        {
            if (start && found)
            {
                cout << "No solution" << endl;
            }
            else if (start)
            {
                string temp;
                while (ans.size() > 0 && ans.back() != ',')
                {
                    temp.push_back(ans.back());
                    ans.pop_back();
                }
                if (ans.size() == 0)
                {
                    cout << "No solution" << endl;
                }
                else
                {
                    ans.pop_back();
                    reverse(temp.begin(), temp.end());
                    ans = ans + temp;
                    cout << ans << endl;
                }
            }
        }
    }
    else
    {
        cout << "No solution" << endl;
    }
    return 0;
}