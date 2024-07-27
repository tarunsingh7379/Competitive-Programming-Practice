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
    vector<int> div;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            div.push_back(i);
            n /= i;
        }
    }
    vector<int> ans;
    ans.push_back(1);
    for (auto num : div)
    {
        ans.push_back(ans.back() * num);
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}