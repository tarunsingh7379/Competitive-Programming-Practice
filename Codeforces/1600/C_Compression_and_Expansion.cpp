#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void print(vector<string> &v)
{
    for (ll i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << ".";
    }
    cout << v.back() << endl;
}

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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<string> v;
        string s = "1";
        v.push_back(s);

        cout << v[0] << endl;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] == 1)
            {
                v.push_back(to_string(a[i]));
                print(v);
                continue;
            }
            ll d = a[i] - (stoi(v.back()));
            if (d == 1)
            {
                v.pop_back();
                v.push_back(to_string(a[i]));
                print(v);
            }
            else
            {
                while (v.size() > 0 && d != 1)
                {
                    v.pop_back();
                    if (v.size() > 0)
                    {
                        d = a[i] - stoi(v.back());
                    }
                }
                if (v.size() == 0)
                {
                    v.push_back(to_string(a[i]));
                }
                else
                {
                    v.pop_back();
                    v.push_back(to_string(a[i]));
                }

                print(v);
            }
        }
        t--;
    }

    return 0;
}