#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }
        int flag = 0;
        for (auto num : mp)
        {
            if (num.second == 3)
            {
                flag = 1;
            }
            if (num.second == 4)
            {
                flag = 2;
            }
        }
        if (flag == 0)
        {
            cout << 4 << endl;
        }
        else if (flag == 1)
        {
            cout << 6 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}