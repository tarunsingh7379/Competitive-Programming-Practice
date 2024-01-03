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
        string a, b;
        cin >> a >> b;
        int j = 0, flag = 1, n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (b[j] == a[i])
            {
                j++;
            }
            else
            {
                while (j < b.size() && b[j] == b[j - 1])
                {
                    j++;
                }
                if (j == b.size() || b[j] != a[i])
                {
                    flag = 0;
                    break;
                }
                j++;
            }
        }
        while (j < b.size() && b[j] == b[j - 1])
        {
            j++;
        }
        if (j < b.size())
        {
            flag = 0;
        }
        cout << (flag ? "YES" : "NO") << endl;

        t--;
    }

    return 0;
}