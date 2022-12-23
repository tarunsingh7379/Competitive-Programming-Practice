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
        reverse(s.begin(), s.end());
        while (s.front() == '0')
        {
            s.erase(s.begin());
        }
        cout << s << endl;
        t--;
    }

    return 0;
}