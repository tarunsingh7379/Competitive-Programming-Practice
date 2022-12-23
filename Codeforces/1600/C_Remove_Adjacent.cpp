#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int j = 25; j > 0; j--)
    {

        int cnt = 0;
        while (cnt <= 100)
        {
            cnt++;
            int i = 0;
            while (i < s.size())
            {
                if (s[i] == (j + 'a'))
                {
                    if ((i - 1 >= 0 && s[i - 1] == (j - 1 + 'a')) || (i + 1 < s.size() && s[i + 1] == (j - 1 + 'a')))
                    {
                        s.erase(s.begin() + i);
                        ans++;
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    i++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}