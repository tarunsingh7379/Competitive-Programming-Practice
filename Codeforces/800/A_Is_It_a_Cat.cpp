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
        int flag = 0;
        while (s.size() > 0 && (s[0] == 'M' || s[0] == 'm'))
        {
            if (flag == 0)
            {
                flag = 1;
            }
            s.erase(s.begin());
        }
        while (s.size() > 0 && (s[0] == 'E' || s[0] == 'e'))
        {
            if (flag == 1)
            {
                flag = 2;
            }
            s.erase(s.begin());
        }
        while (s.size() > 0 && (s[0] == 'O' || s[0] == 'o'))
        {
            if (flag == 2)
            {
                flag = 3;
            }
            s.erase(s.begin());
        }
        while (s.size() > 0 && (s[0] == 'W' || s[0] == 'w'))
        {
            if (flag == 3)
            {
                flag = 4;
            }
            s.erase(s.begin());
        }
        if (flag == 4 && s.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}