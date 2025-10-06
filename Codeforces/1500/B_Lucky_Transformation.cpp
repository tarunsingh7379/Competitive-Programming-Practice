#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1 && k > 0; i++)
    {
        if (s[i] == '4' && s[i + 1] == '7')
        {
            if (i % 2 == 0)
            {
                if (i + 2 < n && s[i + 2] == '7')
                {
                    if (k % 2 != 0)
                    {
                        s[i + 1] = '4';
                    }
                    break;
                }
                else
                {
                    s[i + 1] = '4';
                    k--;
                }
            }
            else
            {
                if (i - 1 >= 0 && s[i - 1] == '4')
                {
                    if (k % 2 != 0)
                    {
                        s[i] = '7';
                    }
                    break;
                }
                else
                {
                    s[i] = '7';
                    k--;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}