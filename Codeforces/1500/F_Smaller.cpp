#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int q;
        cin >> q;
        vector<ll> f1(26, 0), f2(26, 0);
        f1[0] = 1;
        f2[0] = 1;
        while (q--)
        {
            int type, k;
            cin >> type >> k;
            string x;
            cin >> x;
            if (type == 1)
            {
                for (auto c : x)
                {
                    f1[c - 'a'] += k;
                }
            }
            else
            {
                for (auto c : x)
                {
                    f2[c - 'a'] += k;
                }
            }
            int ind1, ind2;
            for (int i = 0; i < 26; i++)
            {
                if (f1[i] != 0)
                {
                    ind1 = i;
                    break;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                if (f2[i] != 0)
                {
                    ind2 = i;
                    break;
                }
            }
            if (ind1 < ind2)
            {
                cout << "YES" << endl;
            }
            else if (ind1 > ind2)
            {
                cout << "NO" << endl;
            }
            else
            {
                int cnt = 0;
                for (int i = 0; i < 26; i++)
                {
                    if (f1[i] != 0)
                    {
                        cnt++;
                    }
                }
                if (cnt > 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cnt = 0;
                    for (int i = 0; i < 26; i++)
                    {
                        if (f2[i] != 0)
                        {
                            cnt++;
                        }
                    }
                    if (cnt == 1)
                    {
                        if (f1[ind1] < f2[ind2])
                        {
                            cout << "YES" << endl;
                        }
                        else
                        {
                            cout << "NO" << endl;
                        }
                    }
                    else
                    {
                        if (f1[ind1] <= f2[ind2])
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
        }
    }

    return 0;
}