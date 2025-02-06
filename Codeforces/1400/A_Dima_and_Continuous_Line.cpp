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
    for (int i = 1; i < n; i++)
    {
        v.push_back({min(a[i - 1], a[i]), max(a[i - 1], a[i])});
    }
    int overlap = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i].second > v[j].first && v[i].second < v[j].second && v[i].first < v[j].first)
            {
                overlap = 1;
                break;
            }
            if (v[i].first > v[j].first && v[i].first < v[j].second && v[i].second > v[j].second)
            {
                overlap = 1;
                break;
            }
        }
        if (overlap)
            break;
    }
    cout << (overlap ? "yes" : "no") << endl;
    return 0;
}