#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    vector<string> v;
    if (s[0] <= t[0])
    {
        int d = t[0] - s[0];
        for (int i = 0; i < d; i++)
        {
            v.push_back("R");
        }
    }
    else
    {
        int d = s[0] - t[0];
        for (int i = 0; i < d; i++)
        {
            v.push_back("L");
        }
    }

    if (s[1] <= t[1])
    {
        int d = t[1] - s[1];
        for (int i = 0; i < d; i++)
        {
            if (v.size() < (i + 1))
            {
                v.push_back("U");
            }
            else
            {
                v[i].push_back('U');
            }
        }
    }
    else
    {
        int d = s[1] - t[1];
        for (int i = 0; i < d; i++)
        {
            if (v.size() < (i + 1))
            {
                v.push_back("D");
            }
            else
            {
                v[i].push_back('D');
            }
        }
    }

    cout << v.size() << endl;
    for (auto num : v)
    {
        cout << num << endl;
    }

    return 0;
}