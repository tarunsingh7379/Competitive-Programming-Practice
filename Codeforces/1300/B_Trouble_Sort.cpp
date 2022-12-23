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
        vector<int> a(n);
        for (auto &num : a)
        {
            cin >> num;
        }
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt1 += (x == 0);
            cnt2 += (x == 1);
        }
        if (is_sorted(a.begin(), a.end()) || (cnt1 > 0 && cnt2 > 0))
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