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
    int k;
    cin >> k;
    int have = 0;
    for (auto c : s)
    {
        if (c != '?' && c != '*')
        {
            have++;
        }
    }
    if (have == k)
    {
        for (auto c : s)
        {
            if (c != '?' && c != '*')
            {
                cout << c;
            }
        }
    }
    else if (have < k)
    {
        string x = "";
        int rem = k - have, flag = 0;
        for (auto c : s)
        {
            if (c != '?' && c != '*')
            {
                x.push_back(c);
            }
            else if (c == '*' && flag == 0)
            {
                for (int i = 0; i < rem; i++)
                {
                    x.push_back(x.back());
                }
                flag = 1;
            }
        }
        if (flag)
        {
            cout << x << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    else
    {
        string x = "";
        int extra = have - k;
        for (auto c : s)
        {
            if (c != '?' && c != '*')
            {
                x.push_back(c);
            }
            else if (extra > 0)
            {
                extra--;
                x.pop_back();
            }
        }
        if (extra == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}