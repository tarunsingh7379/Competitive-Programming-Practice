#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x = "";
        for (int j = 0; j <= i; j++)
        {
            x.push_back(s[j]);
        }
        while (x.size() < k)
        {
            int sz = x.size();
            for (int j = 0; j < sz; j++)
            {
                x.push_back(x[j]);
            }
        }
        string y = "";
        for (int j = 0; j < k; j++)
        {
            y.push_back(x[j]);
        }
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
    return 0;
}