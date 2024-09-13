#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> v;
    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        int n = s.size() - 2;
        v.push_back({n, i});
    }
    sort(v.begin(), v.end());
    bool flag = true;
    int shorter = 0;
    for (int i = 1; i < 4; i++)
    {
        if (2 * v[0].first > v[i].first)
        {
            flag = false;
        }
    }
    if (flag)
    {
        shorter = 1;
    }
    flag = true;
    for (int i = 0; i < 3; i++)
    {
        if (v[3].first < 2 * v[i].first)
        {
            flag = false;
        }
    }
    int greater = 0;
    if (flag)
    {
        greater = 1;
    }
    if (shorter > 0 && greater > 0)
    {
        cout << "C" << endl;
    }
    else if (shorter > 0)
    {
        cout << (char)(v[0].second + 'A') << endl;
    }
    else if (greater > 0)
    {
        cout << (char)(v[3].second + 'A') << endl;
    }
    else
    {
        cout << "C" << endl;
    }

    return 0;
}