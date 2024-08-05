#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(string &s, string &temp, string &ans, int &cnt)
{
    int cost = 0;
    string x = s;
    for (int i = 0; i < s.size(); i += 3)
    {
        if (x[i] != temp[0])
        {
            x[i] = temp[0];
            cost++;
        }
    }
    for (int i = 1; i < s.size(); i += 3)
    {
        if (x[i] != temp[1])
        {
            x[i] = temp[1];
            cost++;
        }
    }
    for (int i = 2; i < s.size(); i += 3)
    {
        if (x[i] != temp[2])
        {
            x[i] = temp[2];
            cost++;
        }
    }
    if (cost < cnt)
    {
        ans = x;
        cnt = cost;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    string temp = "BGR";
    vector<pair<string, int>> v;
    string ans = s;
    int cnt = INT_MAX;
    do
    {
        func(s, temp, ans, cnt);
    } while (next_permutation(temp.begin(), temp.end()));
    cout << cnt << endl;
    cout << ans << endl;

    return 0;
}