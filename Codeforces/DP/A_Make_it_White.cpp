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
        int first = -1, last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }
        if (first == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (last - first + 1) << endl;
        }
        t--;
    }

    return 0;
}