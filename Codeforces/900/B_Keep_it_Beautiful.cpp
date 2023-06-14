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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string ans = "";
        ans.push_back('1');
        int last = a[0];
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= last)
            {
                if (flag == 1)
                {
                    if (a[i] <= a[0])
                    {
                        ans.push_back('1');
                        last = a[i];
                    }
                    else
                    {
                        ans.push_back('0');
                    }
                }
                else
                {
                    ans.push_back('1');
                    last = a[i];
                }
            }
            else
            {
                if (flag == 0)
                {
                    if (a[i] <= a[0])
                    {
                        ans.push_back('1');
                        last = a[i];
                        flag = 1;
                    }
                    else
                    {
                        ans.push_back('0');
                    }
                }
                else
                {
                    ans.push_back('0');
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}