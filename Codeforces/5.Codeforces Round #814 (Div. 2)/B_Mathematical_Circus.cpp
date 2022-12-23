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
        ll n, k;
        cin >> n >> k;
        if (k % 2 != 0)
        {
            cout << "YES" << endl;
            for (ll i = 1; i <= n; i += 2)
            {
                cout << i << " " << i + 1 << endl;
            }
        }
        else
        {
            vector<int> v1, v2;
            vector<int> v3;
            for (int i = 1; i <= n; i++)
            {
                if (i % 4 == 0)
                {
                    v1.push_back(i);
                }
                else if ((i + k) % 4 == 0)
                {
                    v2.push_back(i);
                }
                else
                {
                    v3.push_back(i);
                }
            }
            if (v1.size() + v2.size() >= v3.size())
            {
                cout << "YES" << endl;
                int i = 0, j = 0;
                while (i < v1.size() && j < v3.size())
                {
                    cout << v3[j] << " " << v1[i] << endl;
                    i++;
                    j++;
                }
                if (j < v3.size())
                {
                    i = 0;
                    while (i < v2.size() && j < v3.size())
                    {
                        cout << v2[i] << " " << v3[j] << endl;
                        i++;
                        j++;
                    }
                    while (i < v2.size() - 1)
                    {
                        cout << v2[i] << " " << v2[i + 1] << endl;
                        i += 2;
                    }
                }
                else
                {
                    j = 0;
                    while (i < v1.size() && j < v2.size())
                    {
                        cout << v2[j] << " " << v1[i] << endl;
                        i++;
                        j++;
                    }
                    while (i < v1.size() - 1)
                    {
                        cout << v1[i] << " " << v1[i + 1] << endl;
                        i += 2;
                    }
                    while (j < v2.size() - 1)
                    {
                        cout << v2[j] << " " << v2[j + 1] << endl;
                        j += 2;
                    }
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}