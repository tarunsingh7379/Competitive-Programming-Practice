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
    int cnt1 = 0, cnt2 = 0;
    for (auto c : s)
    {
        if (c == 'z')
        {
            cnt1++;
        }
        else if (c == 'n')
        {
            cnt2++;
        }
    }
    for (int i = 0; i < cnt2; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < cnt1; i++)
    {
        cout << 0 << " ";
    }
    cout << "\n";

    return 0;
}