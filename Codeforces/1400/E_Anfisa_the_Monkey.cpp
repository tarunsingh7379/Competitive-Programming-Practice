#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, a, b;
    cin >> k >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    if (k * a > n || k * b < n)
    {
        cout << "No solution" << endl;
    }
    else
    {
        int rem = n - k * a;
        int pos = 0;
        for (int i = 0; i < k; i++)
        {
            int cur_len = min(b, a + rem);
            rem -= (cur_len - a);
            cout << s.substr(pos, cur_len) << endl;
            pos += cur_len;
        }
    }

    return 0;
}