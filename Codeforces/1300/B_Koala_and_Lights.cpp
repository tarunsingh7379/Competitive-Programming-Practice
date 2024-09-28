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
    string s;
    cin >> s;
    vector<int> start(n), interval(n);
    for (int i = 0; i < n; i++)
    {
        cin >> interval[i] >> start[i];
    }
    int ans = 0, on = 0;
    vector<int> state;
    for (auto c : s)
    {
        state.push_back(c - '0');
        if (c == '1')
        {
            on++;
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (start[j] == i)
            {
                if (state[j] == 0)
                {
                    state[j] = 1;
                    on++;
                }
                else
                {
                    state[j] = 0;
                    on--;
                }
                start[j] += interval[j];
            }
        }
        ans = max(ans, on);
    }
    cout << ans << endl;

    return 0;
}