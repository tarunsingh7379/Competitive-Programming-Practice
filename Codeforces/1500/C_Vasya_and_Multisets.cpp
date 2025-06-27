#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int cnt1 = 0, cnt2 = 0;
    int c = -1;
    for (auto num : mp)
    {
        if (num.second == 1)
        {
            cnt1++;
        }
        else if (num.second > 2)
        {
            cnt2++;
            c = num.first;
        }
    }
    string ans;
    if (cnt1 % 2 == 0)
    {
        int k = cnt1 / 2;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] == 1 && k > 0)
            {
                if (flag == 0)
                    ans.push_back('A');
                else
                    ans.push_back('B');
                k--;
                if (k == 0)
                {
                    k = cnt1 / 2;
                    flag = 1;
                }
            }
            else
            {
                ans.push_back('A');
            }
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
    else if (cnt2 > 0)
    {
        int k = (cnt1 + 1) / 2;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] == 1 && k > 0)
            {
                if (flag == 0)
                    ans.push_back('A');
                else
                    ans.push_back('B');
                k--;
                if (k == 0)
                {
                    k = cnt1 / 2;
                    flag = 1;
                }
            }
            else if (a[i] == c && cnt2 > 0)
            {
                ans.push_back('B');
                cnt2 = 0;
            }
            else
            {
                ans.push_back('A');
            }
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}