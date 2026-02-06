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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans;
    int is_zero = -1, is_hundred = -1, is_one = -1, is_ten = -1, extra = -1;

    for (auto num : a)
    {
        if (num == 0)
        {
            is_zero = true;
        }
        else if (num == 100)
        {
            is_hundred = true;
        }
        else if (num >= 1 && num <= 9)
        {
            is_one = num;
        }
        else if (num % 10 == 0)
        {
            is_ten = num;
        }
        else
        {
            extra = num;
        }
    }

    if (is_zero != -1)
    {
        ans.push_back(0);
    }
    if (is_hundred != -1)
    {
        ans.push_back(100);
    }
    if (is_one != -1)
    {
        ans.push_back(is_one);
    }
    if (is_ten != -1)
    {
        ans.push_back(is_ten);
    }
    if (is_one == -1 && is_ten == -1 && extra != -1)
    {
        ans.push_back(extra);
    }

    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}