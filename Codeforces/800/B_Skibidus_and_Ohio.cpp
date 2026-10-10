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
        bool present = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
                present = true;
        }
        cout << (present ? 1 : s.size()) << endl;
        t--;
    }

    return 0;
}