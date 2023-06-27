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
        if (a[n - 1] == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int cnt = 0;
            vector<int> ans;
            for (int i = n - 1; i >= 0; i--)
            {
                ans.push_back(0);
                if (a[i] == 1)
                {
                    cnt++;
                }
                else
                {
                    if (cnt != 0)
                    {
                        ans.pop_back();
                        ans.pop_back();
                        ans.push_back(cnt);
                        ans.push_back(0);
                    }
                    cnt = 0;
                }
            }
            if (cnt != 0)
            {
                ans.pop_back();
                ans.push_back(cnt);
            }
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