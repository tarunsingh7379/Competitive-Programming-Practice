#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string my;
    cin >> my;
    int n;
    cin >> n;
    map<pair<string, string>, int> mp;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string name1, name2, s;
        cin >> name1;
        cin >> s;
        int point = 0;
        if (s == "posted")
        {
            point += 15;
            cin >> s;
        }
        else if (s == "commented")
        {
            point += 10;
            cin >> s;
        }
        else
        {
            point += 5;
        }
        cin >> name2;
        name2 = name2.substr(0, name2.size() - 2);
        cin >> s;
        mp[{name1, name2}] += point;
        mp[{name2, name1}] += point;
        st.insert(name1);
        st.insert(name2);
    }
    vector<pair<string, int>> v;
    for (auto it : st)
    {
        string x = it;
        if (x != my)
            v.push_back({x, max(mp[{x, my}], mp[{my, x}])});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto num : v)
    {
        cout << num.first << endl;
    }

    return 0;
}