#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {4, 8, 15, 16, 23, 42};
    map<int, pair<int, int>> mp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            mp[a[i] * a[j]] = {a[i], a[j]};
        }
    }
    vector<int> ans;
    for (int i = 1; i <= 6; i += 3)
    {
        cout << "? " << i << " " << i + 1 << endl;
        int x;
        cin >> x;
        cout << "? " << i + 1 << " " << i + 2 << endl;
        int y;
        cin >> y;
        map<int, int> temp;
        temp[mp[x].first]++;
        temp[mp[x].second]++;
        temp[mp[y].first]++;
        temp[mp[y].second]++;
        int z = 0;
        for (auto num : temp)
        {
            if (num.second > 1)
            {
                z = num.first;
                break;
            }
        }
        ans.push_back(x / z);
        ans.push_back(z);
        ans.push_back(y / z);
    }

    cout << "! ";
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}