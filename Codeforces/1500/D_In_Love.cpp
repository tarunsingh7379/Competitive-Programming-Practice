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
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        int l, r;
        cin >> l >> r;
        if (c == '+')
        {
            mp1[l]++;
            mp2[r]++;
        }
        else
        {
            mp1[l]--;
            mp2[r]--;
            if (mp1[l] == 0)
            {
                mp1.erase(l);
            }
            if (mp2[r] == 0)
            {
                mp2.erase(r);
            }
        }
        if (mp1.size() > 0 && mp2.size() > 0 && mp1.rbegin()->first > mp2.begin()->first)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}