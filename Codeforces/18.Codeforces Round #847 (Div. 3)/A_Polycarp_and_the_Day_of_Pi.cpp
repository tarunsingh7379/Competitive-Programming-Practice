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
        string pi = "314159265358979323846264338327";
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
        t--;
    }

    return 0;
}