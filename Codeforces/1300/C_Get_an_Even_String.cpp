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
        vector<int> prev(26, 0);
        int len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (prev[s[i] - 'a'])
            {
                len += 2;
                for (int j = 0; j < 26; j++)
                {
                    prev[j] = 0;
                }
            }
            else
            {
                prev[s[i] - 'a'] = 1;
            }
        }
        cout << s.size() - len << endl;
        t--;
    }

    return 0;
}