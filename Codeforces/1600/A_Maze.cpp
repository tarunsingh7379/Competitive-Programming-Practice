#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int empty = 0;
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                empty++;
                p = {i, j};
            }
        }
    }

    set<pair<int, int>> st;
    queue<pair<int, int>> q;
    q.push(p);
    st.insert(p);
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int x = p.first, y = p.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if ((new_x >= 0) && (new_x < n) && (new_y >= 0) && (new_y < m) && !(st.count({new_x, new_y})) && (v[new_x][new_y] == '.') && (st.size() < (empty - k)))
            {
                st.insert({new_x, new_y});
                q.push({new_x, new_y});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                if (!st.count({i, j}))
                {
                    cout << "X";
                }
                else
                {
                    cout << v[i][j];
                }
            }
            else
            {
                cout << v[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}