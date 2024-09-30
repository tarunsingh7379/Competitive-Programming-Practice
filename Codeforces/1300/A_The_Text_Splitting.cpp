#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        int j = n - i * a;
        if (j >= 0 && j % b == 0)
        {
            cout << i + j / b << endl;
            int cnt = 0;
            int k = 0;
            for (; cnt < i; k += a)
            {
                cout << s.substr(k, a) << endl;
                cnt++;
            }
            cnt = 0;
            for (; cnt < j / b; k += b)
            {
                cout << s.substr(k, b) << endl;
                cnt++;
            }
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}