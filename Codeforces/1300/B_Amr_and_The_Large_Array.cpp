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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> start, end, freq;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        if (start[a[i]] == 0)
        {
            start[a[i]] = i + 1;
        }
        end[a[i]] = i + 1;
        freq[a[i]]++;
        ma = max(ma, freq[a[i]]);
    }
    int l = -1, r = -1;
    for (auto num : freq)
    {
        if (num.second == ma)
        {
            int new_d = end[num.first] - start[num.first] + 1;
            if (l != -1)
            {
                int prev_d = r - l + 1;
                if (new_d < prev_d)
                {
                    l = start[num.first];
                    r = end[num.first];
                }
            }
            else
            {
                l = start[num.first];
                r = end[num.first];
            }
        }
    }
    cout << l << " " << r << endl;

    return 0;
}