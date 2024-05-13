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
    vector<string> a;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    vector<string> b;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        b.push_back(s);
    }

    vector<vector<int>> freq(4, vector<int>(3));
    for (auto num : a)
    {
        if (num.back() == 'S')
        {
            freq[num.size() - 1][0]++;
        }
        else if (num.back() == 'L')
        {
            freq[num.size() - 1][1]++;
        }
        else
        {
            freq[num.size() - 1][2]++;
        }
    }

    int ans = 0;
    for (auto num : b)
    {
        if (num.back() == 'S')
        {
            freq[num.size() - 1][0]--;
            if (freq[num.size() - 1][0] < 0)
            {
                ans++;
            }
        }
        else if (num.back() == 'L')
        {
            freq[num.size() - 1][1]--;
            if (freq[num.size() - 1][1] < 0)
            {
                ans++;
            }
        }
        else
        {
            freq[num.size() - 1][2]--;
            if (freq[num.size() - 1][2] < 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}