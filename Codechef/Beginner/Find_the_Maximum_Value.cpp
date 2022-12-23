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
    cin.ignore();
    while (t)
    {
        string s;
        getline(cin, s);
        s = s + " ";
        vector<ll> v;
        string x = "";
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                x = x + s[i];
            }
            else
            {
                ll num = stoi(x);
                v.push_back(num);
                x = "";
            }
        }

        sort(v.begin(), v.end());
        if (v[v.size() - 1] == (v.size() - 1))
        {
            cout << v[v.size() - 2] << endl;
        }
        else
        {
            cout << v[v.size() - 1] << endl;
        }
        t--;
    }

    return 0;
}