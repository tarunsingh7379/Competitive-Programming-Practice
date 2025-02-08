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
    int n = s.size();
    int last = -1, cost = 0;
    char ma = '0';
    for (int i = 0; i < n; i++)
    {
        ma = s[i];
        last = -1;
        cost = 0;
        for (int j = i + 1; j < n; j++)
        {
            cost++;
            if (s[j] > ma)
            {
                if (cost <= k)
                {
                    last = j;
                    ma = s[j];
                }
            }
        }
        if (last != -1)
        {
            for (int j = last; j > i; j--)
            {
                swap(s[j], s[j - 1]);
            }
            k -= (last - i);
        }
    }
    cout << s << endl;
    return 0;
}