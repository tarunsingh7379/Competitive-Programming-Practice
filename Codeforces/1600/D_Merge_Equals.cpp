#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<ll, set<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x].insert(i);
    }
    set<ll> uniq_elements;
    for (auto num : mp)
    {
        uniq_elements.insert(num.first);
    }
    while (!uniq_elements.empty())
    {
        ll cur_num = *uniq_elements.begin();
        uniq_elements.erase(uniq_elements.begin());
        while (mp[cur_num].size() >= 2)
        {
            ll first_ind = *mp[cur_num].begin();
            mp[cur_num].erase(mp[cur_num].begin());
            ll second_ind = *mp[cur_num].begin();
            mp[cur_num].erase(mp[cur_num].begin());
            ll new_num = cur_num + cur_num;
            mp[new_num].insert(second_ind);
            if (uniq_elements.find(new_num) == uniq_elements.end())
            {
                uniq_elements.insert(new_num);
            }
        }
    }
    vector<ll> ans(n, -1);
    for (auto num : mp)
    {
        for (auto it : num.second)
        {
            ans[it] = num.first;
        }
    }
    vector<ll> final_ans;
    for (auto num : ans)
    {
        if (num != -1)
            final_ans.push_back(num);
    }
    cout << final_ans.size() << endl;
    for (auto num : final_ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}