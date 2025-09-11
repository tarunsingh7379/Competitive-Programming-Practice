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
    vector<int> freq(11, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
        ok = false;
        for (int j = 1; j <= 10; j++)
        {
            if (freq[j] > 0)
            {
                freq[j]--;
                set<int> st;
                for (auto num : freq)
                {
                    if (num > 0)
                    {
                        st.insert(num);
                    }
                }
                freq[j]++;
                if (st.size() == 1)
                {
                    ok = true;
                    break;
                }
            }
        }
        if (ok)
            ans = i + 1;
    }
    cout << ans << endl;

    return 0;
}