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
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            int cnt = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == '0')
                {
                    cnt++;
                }
            }
            if (cnt >= 6)
            {
                flag = 1;
            }
            break;
        }
    }
    cout << (flag ? "yes" : "no") << endl;

    return 0;
}