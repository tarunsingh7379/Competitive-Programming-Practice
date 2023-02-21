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
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int d = s[i] - '0';
        if (d % 2 == 0 && s[i] < s[n - 1])
        {
            swap(s[i], s[n - 1]);
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = n - 2; i >= 0; i--)
        {
            int d = s[i] - '0';
            if (d % 2 == 0 && s[i] > s[n - 1])
            {
                swap(s[i], s[n - 1]);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << s << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}