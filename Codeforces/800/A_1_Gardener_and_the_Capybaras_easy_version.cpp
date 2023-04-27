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
        int n = s.size();
        int flag = 0;
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = i; j < n - 1; j++)
            {
                string a = s.substr(0, i);
                string b = s.substr(i, j - i + 1);
                string c = s.substr(j + 1);
                if ((b >= a && b >= c) || (b <= a && b <= c))
                {
                    cout << a << " " << b << " " << c << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << ": (" << endl;
        }
        t--;
    }

    return 0;
}