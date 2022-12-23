#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(string a, string b, string s)
{
    vector<string> ans;
    ll i = a.size() - 1;
    ll j = b.size() - 1;
    while (i >= 0 && j >= 0)
    {
        ll x = a[i] - '0';
        ll y = b[j] - '0';
        ll z = x + y;
        ans.push_back(to_string(z));
        i--;
        j--;
    }
    while (i >= 0)
    {
        ll z = a[i] - '0';
        ans.push_back(to_string(z));
        i--;
    }
    while (j >= 0)
    {
        ll z = b[j] - '0';
        ans.push_back(to_string(z));
        j--;
    }
    reverse(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++)
    {
        if (ans[i] == "0")
        {
            ans.erase(ans.begin() + i);
        }
        else
        {
            break;
        }
    }
    string temp;
    for (auto num : ans)
    {
        temp = temp + num;
    }
    if (temp == s)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, s;
    cin >> a >> s;
    int flag = 0;
    for (ll i = 1; i <= 100; i++)
    {
        if (check(a, to_string(i), s))
        {
            flag = 1;
            cout << i << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }

    return 0;
}