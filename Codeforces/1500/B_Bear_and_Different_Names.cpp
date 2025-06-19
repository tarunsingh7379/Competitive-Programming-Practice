#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<string> v;
    for (int i = 0; i < n - k + 1; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<string> temp;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            string x;
            x.push_back(i + 'a');
            x.push_back(j + 'a');
            temp.push_back(x);
        }
    }
    int ind = 0;
    vector<string> ans;
    for (int i = 0; i < k - 1; i++)
    {
        ans.push_back(temp[ind++]);
    }
    for (auto res : v)
    {
        if (res == "YES")
        {
            ans.push_back(temp[ind++]);
        }
        else
        {
            ans.push_back(ans[ans.size() - k + 1]);
        }
    }
    for (auto num : ans)
    {
        cout << "A" << num << " ";
    }
    return 0;
}