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
        int n;
        cin >> n;
        int a[n];
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                ok = true;
            }
        }
        if (!ok)
        {
            cout << "No" << endl;
        }
        else
        {
            int cnt = 0;
            vector<int> pos, neg;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > 0)
                {
                    pos.push_back(a[i]);
                }
                else if (a[i] < 0)
                {
                    neg.push_back(a[i]);
                }
                else
                {
                    cnt++;
                }
            }
            cout << "Yes" << endl;
            for (int i = 0; i < cnt; i++)
            {
                cout << 0 << " ";
            }
            ll sum = 0, i = 0, j = 0;
            while (i < pos.size() || j < neg.size())
            {
                while (sum >= 0 && j < neg.size())
                {
                    sum += neg[j];
                    cout << neg[j] << " ";
                    j++;
                }
                while (sum < 0 && i < pos.size())
                {
                    sum += pos[i];
                    cout << pos[i] << " ";
                    i++;
                }
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}