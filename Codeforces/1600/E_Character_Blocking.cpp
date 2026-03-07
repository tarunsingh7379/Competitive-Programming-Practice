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
        vector<string> v(2);
        cin >> v[0] >> v[1];
        int time, q;
        cin >> time >> q;
        set<int> bad;
        set<pair<int, int>> hold;
        int n = v[0].size();
        for (int i = 0; i < n; i++)
        {
            if (v[0][i] != v[1][i])
            {
                bad.insert(i);
            }
        }
        int cur = 0;
        while (q--)
        {
            int type;
            cin >> type;
            while (!hold.empty() && hold.begin()->first <= cur)
            {
                bad.insert(hold.begin()->second);
                hold.erase(hold.begin());
            }
            if (type == 1)
            {
                int pos;
                cin >> pos;
                pos--;
                if (bad.count(pos))
                {
                    bad.erase(pos);
                    hold.insert({cur + time, pos});
                }
            }
            else if (type == 2)
            {
                int first, pos1, second, pos2;
                cin >> first >> pos1 >> second >> pos2;
                first--;
                second--;
                pos1--;
                pos2--;
                swap(v[first][pos1], v[second][pos2]);
                if (v[0][pos1] == v[1][pos1])
                {
                    bad.erase(pos1);
                }
                else
                {
                    bad.insert(pos1);
                }
                if (v[0][pos2] == v[1][pos2])
                {
                    bad.erase(pos2);
                }
                else
                {
                    bad.insert(pos2);
                }
            }
            else
            {
                if (bad.empty())
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            cur++;
        }
        t--;
    }

    return 0;
}