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
        int n, m;
        cin >> n >> m;
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp1[x]++;
        }
        priority_queue<int> pq;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        int cnt = 0;
        while (!pq.empty())
        {
            int x = pq.top();
            pq.pop();
            if (mp1.find(x) != mp1.end())
            {
                mp1[x]--;
                if (mp1[x] == 0)
                {
                    mp1.erase(x);
                }
            }
            else
            {
                int a = x / 2;
                int b = x - a;
                pq.push(a);
                pq.push(b);
                cnt++;
                if (cnt > (n - m))
                {
                    break;
                }
            }
        }
        if (pq.size() == 0 && mp1.size() == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }

    return 0;
}