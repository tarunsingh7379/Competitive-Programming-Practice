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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> v;
        for (auto num : mp)
        {
            v.push_back(num.second);
        }
        reverse(v.begin(), v.end());
        int g = v[0], s = 0, b = 0, m = n / 2;
        int i = 1;
        while (i < v.size() && s < (g + 1))
        {
            s += v[i];
            i++;
        }
        while (i < v.size() && b < (g + 1))
        {
            b += v[i];
            i++;
        }
        if (g < s && g < b && (g + s + b) <= m)
        {
            while (i < v.size())
            {
                int temp = g + s + b + v[i];
                if (temp > m)
                {
                    break;
                }
                b += v[i];
                i++;
            }
            cout << g << " " << s << " " << b << endl;
        }
        else
        {
            cout << "0 0 0" << endl;
        }
        t--;
    }

    return 0;
}