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
        set<int> st1, st2;
        vector<int> p(n), q(n);
        vector<pair<int, int>> v1, v2;
        ll flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (!st1.count(a[i]))
            {
                st1.insert(a[i]);
                p[i] = a[i];
                v1.push_back({a[i], i});
            }
            else if (!st2.count(a[i]))
            {
                st2.insert(a[i]);
                q[i] = a[i];
                v2.push_back({a[i], i});
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            int j = 0;
            for (int i = 1; i <= n; i++)
            {
                if (!st1.count(i))
                {
                    int val = v2[j].first, ind = v2[j].second;
                    if (i <= val)
                    {
                        p[ind] = i;
                        j++;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                j = 0;
                for (int i = 1; i <= n; i++)
                {
                    if (!st2.count(i))
                    {
                        int val = v1[j].first, ind = v1[j].second;
                        if (i <= val)
                        {
                            q[ind] = i;
                            j++;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                if (flag == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                    for (auto num : p)
                    {
                        cout << num << " ";
                    }
                    cout << endl;
                    for (auto num : q)
                    {
                        cout << num << " ";
                    }
                    cout << endl;
                }
            }
        }
        t--;
    }

    return 0;
}