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
    vector<int> ans;
    int n = s.size();
    int cnt = 0;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        else if (s[i] == ')')
        {
            cnt--;
        }
        else if (cnt > 0)
        {
            ans.push_back(1);
            cnt--;
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (!ok || cnt < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ans[ans.size() - 1] += cnt;
        cnt = 0;
        int ind = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '(')
            {
                cnt++;
            }
            else if (s[i] == ')')
            {
                cnt--;
                if (cnt < 0)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                cnt -= ans[ind];
                if (cnt < 0)
                {
                    ok = false;
                    break;
                }
                ind++;
            }
        }
        if (!ok)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto num : ans)
            {
                cout << num << endl;
            }
        }
    }
    return 0;
}