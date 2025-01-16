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
    map<int, pair<int, int>> pos;
    int cur_left = 0, cur_right = 0;
    int first = 1;
    for (int i = 0; i < n; i++)
    {
        char type;
        cin >> type;
        int id;
        cin >> id;
        switch (type)
        {
        case 'L':
        {
            if (!first)
            {
                pos[id].first = ++cur_left;
                pos[id].second = -1;
            }
            else
            {
                pos[id].first = 0;
                pos[id].second = 0;
                first = 0;
            }
        }
        break;
        case 'R':
        {
            if (!first)
            {
                pos[id].first = -1;
                pos[id].second = ++cur_right;
            }
            else
            {
                pos[id].first = 0;
                pos[id].second = 0;
                first = 0;
            }
        }
        break;
        case '?':
        {
            if (pos[id].first != -1)
            {
                cout << min(cur_left - pos[id].first, cur_right + pos[id].first) << endl;
            }
            else
            {
                cout << min(cur_right - pos[id].second, cur_left + pos[id].second) << endl;
            }
        }
        break;
        default:
            break;
        }
    }

    return 0;
}