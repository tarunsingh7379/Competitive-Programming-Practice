#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(string &s)
{
    for (auto c : s)
    {
        if (c != '0')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    vector<string> ans;
    while (check(s))
    {
        string x;
        for (auto &c : s)
        {
            if (c != '0')
            {
                c--;
                x.push_back('1');
            }
            else if (x.size() != 0)
            {
                x.push_back('0');
            }
        }
        ans.push_back(x);
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}