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
        string a;
        cin >> a;
        string b;
        cin >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> ans;
            for (int r = n - 1; r >= 0; r--)
            {
                if (b[r] == a[0])
                {
                    if (a[0] == '1')
                    {
                        a[0] = '0';
                    }
                    else
                    {
                        a[0] = '1';
                    }
                    ans.push_back(1);
                }
                for (int i = 0; i <= r; i++)
                {
                    if (a[i] == '0')
                    {
                        a[i] = '1';
                    }
                    else
                    {
                        a[i] = '0';
                    }
                }
                int len = r + 1;
                reverse(a.begin(), a.begin() + len);
                ans.push_back(len);
            }
            cout << ans.size() << " ";
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}