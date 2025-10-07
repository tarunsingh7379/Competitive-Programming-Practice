#include <bits/stdc++.h>
using namespace std;

struct Candy
{
    int h, m;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<Candy> type0, type1;
    for (int i = 0; i < n; i++)
    {
        int t, h, m;
        cin >> t >> h >> m;
        if (t == 0)
            type0.push_back({h, m});
        else
            type1.push_back({h, m});
    }

    sort(type0.begin(), type0.end(), [](Candy a, Candy b)
         { return a.h < b.h; });
    sort(type1.begin(), type1.end(), [](Candy a, Candy b)
         { return a.h < b.h; });

    auto simulate = [&](int startType)
    {
        int cnt = 0;
        int jump = x;
        vector<bool> used0(type0.size(), false), used1(type1.size(), false);
        int currType = startType;

        while (true)
        {
            vector<Candy> &currVec = (currType == 0 ? type0 : type1);
            vector<bool> &usedVec = (currType == 0 ? used0 : used1);

            int bestIdx = -1;
            int bestMass = -1;

            // Pick the reachable candy with maximum mass
            for (int i = 0; i < (int)currVec.size(); i++)
            {
                if (!usedVec[i] && currVec[i].h <= jump && currVec[i].m > bestMass)
                {
                    bestMass = currVec[i].m;
                    bestIdx = i;
                }
            }

            if (bestIdx == -1)
                break;

            jump += currVec[bestIdx].m;
            usedVec[bestIdx] = true;
            cnt++;
            currType ^= 1;
        }

        return cnt;
    };

    int ans = max(simulate(0), simulate(1));
    cout << ans << endl;

    return 0;
}
