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
    int n = s.size();
    int i = 0;
    int flag = 0;
    while (i < n - 1)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            i += 2;
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        flag = 0;
        while (i < n - 1)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            flag = 0;
            i = 0;
            while (i < n - 1)
            {
                if (s[i] == 'B' && s[i + 1] == 'A')
                {
                    i += 2;
                    flag = 1;
                    break;
                }
                i++;
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                flag = 0;
                while (i < n - 1)
                {
                    if (s[i] == 'A' && s[i + 1] == 'B')
                    {
                        flag = 1;
                        break;
                    }
                    i++;
                }
                if (flag == 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}