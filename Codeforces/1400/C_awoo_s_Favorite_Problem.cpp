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
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<ll> v1(3, 0), v2(3, 0);
            for (auto c : a)
            {
                v1[c - 'a']++;
            }
            for (auto c : b)
            {
                v2[c - 'a']++;
            }
            if (v1 != v2)
            {
                cout << "NO" << endl;
            }
            else
            {
                ll j = 0;
                ll flag = 1;
                for (ll i = 0; i < n; i++)
                {
                    if (b[i] == a[j])
                    {
                        j++;
                    }
                    else
                    {
                        if (b[i] == 'a')
                        {
                            flag = 0;
                            break;
                        }
                        else if (b[i] == 'b')
                        {
                            if (a[j] == 'c')
                            {
                                flag = 0;
                                break;
                            }
                            while (j < n && a[j] == 'a')
                            {
                                j++;
                            }
                            if (j == n)
                            {
                                flag = 0;
                                break;
                            }
                            if (a[j] != 'b')
                            {
                                flag = 0;
                                break;
                            }
                        }
                        else
                        {
                        }
                    }
                }
            }
        }
        t--;
    }

    return 0;
}