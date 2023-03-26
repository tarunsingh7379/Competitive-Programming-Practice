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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<set<int>> v1(26);
        vector<set<int>> v2(26);

        for (int i = 0; i < n; i++)
        {
            v1[s[i] - 'a'].insert(i % 2);
            v2[s[i] - 'a'].insert(!(i % 2));
        }

        int flag = 1;

        for (int i = 0; i < 26; i++)
        {
            if (v1[i].size() > 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            flag = 1;
            for (int i = 0; i < 26; i++)
            {
                if (v1[i].size() > 1)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        t--;
    }

    return 0;
}