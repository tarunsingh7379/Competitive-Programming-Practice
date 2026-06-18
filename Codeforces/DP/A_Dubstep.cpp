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

    // Replace every "WUB" with a space
    for (int i = 0; i < (int)s.size();)
    {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB")
        {
            cout << ' ';

            // Skip consecutive WUBs
            while (i + 2 < s.size() && s.substr(i, 3) == "WUB")
            {
                i += 3;
            }
        }
        else
        {
            cout << s[i];
            i++;
        }
    }

    return 0;
}