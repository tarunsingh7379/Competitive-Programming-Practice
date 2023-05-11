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
    string s;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            s.push_back('F');
        }
        if (i % 5 == 0)
        {
            s.push_back('B');
        }
    }
    while (t)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i <= s.size() - n; i++)
        {
            if (s.substr(i, n) == x)
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}