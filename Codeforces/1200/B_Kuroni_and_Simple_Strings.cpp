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
    int n = s.size();
    vector<int> suffix(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1];
        if (s[i] == ')')
        {
            suffix[i]++;
        }
    }
    int ans = 0, cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        ans = max(ans, min(cnt, suffix[i + 1]));
    }
    if (ans)
    {
        cout << 1 << endl;
        cout << 2 * ans << endl;
        cnt = 0;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                cout << i + 1 << " ";
                cnt++;
            }
            if (cnt == ans)
            {
                break;
            }
        }
        cnt = 0;
        vector<int> temp;
        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
            {
                temp.push_back(i + 1);
                cnt++;
            }
            if (cnt == ans)
            {
                break;
            }
        }
        reverse(temp.begin(), temp.end());
        for (auto num : temp)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}