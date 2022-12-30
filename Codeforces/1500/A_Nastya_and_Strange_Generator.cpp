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
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }
        int num = 1, flag = 1;
        while (num <= n)
        {
            int i = pos[num];
            while (i < n)
            {
                if (a[i] == num)
                {
                    a[i] = -1;
                    num++;
                    i++;
                }
                else if (a[i] == -1)
                {
                    break;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        t--;
    }

    return 0;
}