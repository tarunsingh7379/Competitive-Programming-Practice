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
        string s;
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for (auto c : s)
        {
            if (c == 'A')
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 > cnt2)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
        t--;
    }

    return 0;
}