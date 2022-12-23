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
        vector<string> v;
        for (int i = 0; i < 2 * n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        string s;
        cin >> s;
        v.push_back(s);
        vector<int> f(26, 0);
        for (auto num : v)
        {
            for (auto c : num)
            {
                f[c - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (f[i] % 2 != 0)
            {
                cout << (char)(i + 'a') << endl;
                break;
            }
        }
        t--;
    }

    return 0;
}