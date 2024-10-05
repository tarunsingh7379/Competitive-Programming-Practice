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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], i + 1});
    }
    sort(v.begin(), v.end());
    int ind = 0;
    string s;
    cin >> s;
    vector<int> ext;
    for (auto c : s)
    {
        if (c == '0')
        {
            cout << v[ind].second << " ";
            ext.push_back(v[ind].second);
            ind++;
        }
        else
        {
            cout << ext.back() << " ";
            ext.pop_back();
        }
    }

    return 0;
}