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
    vector<int> freq(3, 0);
    for (auto c : s)
    {
        freq[c - '0']++;
    }
    int req = n / 3;
    for (int i = 0; i < n && freq[0] < req; i++)
    {
        if (s[i] > '0' && freq[s[i] - '0'] > req)
        {
            freq[s[i] - '0']--;
            freq[0]++;
            s[i] = '0';
        }
    }
    for (int i = 0; i < n && freq[1] < req; i++)
    {
        if (s[i] > '1' && freq[s[i] - '0'] > req)
        {
            freq[s[i] - '0']--;
            freq[1]++;
            s[i] = '1';
        }
    }
    for (int i = n - 1; i >= 0 && freq[2] < req; i--)
    {
        if (s[i] < '2' && freq[s[i] - '0'] > req)
        {
            freq[s[i] - '0']--;
            freq[2]++;
            s[i] = '2';
        }
    }
    for (int i = n - 1; i >= 0 && freq[1] < req; i--)
    {
        if (s[i] < '1' && freq[s[i] - '0'] > req)
        {
            freq[s[i] - '0']--;
            freq[2]++;
            s[i] = '1';
        }
    }
    cout << s << endl;

    return 0;
}