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
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a')
        {
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] == 'a')
                {
                    break;
                }
                s[j] = s[j] - 1;
                cnt++;
            }
            break;
        }
    }
    if (cnt == 0)
    {
        s[s.size() - 1] = 'z';
    }
    cout << s << endl;
    return 0;
}