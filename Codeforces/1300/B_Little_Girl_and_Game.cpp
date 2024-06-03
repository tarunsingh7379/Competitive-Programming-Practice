#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2)
        {
            cnt++;
        }
    }

    if (cnt <= 1)
    {
        cout << "First" << endl;
    }
    else
    {
        if (cnt % 2)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }

    return 0;
}