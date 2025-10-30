#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_extra(vector<int> &cur, vector<int> &freq)
{
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cur[i] > freq[i])
        {
            return INT_MAX;
        }
        cnt += freq[i] - cur[i];
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    vector<int> freq(26, 0);
    for (auto c : b)
    {
        freq[c - 'a']++;
    }
    vector<int> cur(26, 0);
    int cnt = 0;
    if (b.size() > a.size())
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (a[i] == '?')
        {
            cnt++;
        }
        else
        {
            cur[a[i] - 'a']++;
        }
    }
    int ans = 0;
    int extra = get_extra(cur, freq);
    if (extra == cnt)
    {
        ans++;
    }
    for (int i = b.size(); i < a.size(); i++)
    {
        if (a[i] == '?')
        {
            cnt++;
        }
        else
        {
            cur[a[i] - 'a']++;
        }
        if (a[i - b.size()] == '?')
        {
            cnt--;
        }
        else
        {
            cur[a[i - b.size()] - 'a']--;
        }
        extra = get_extra(cur, freq);
        if (extra == cnt)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}