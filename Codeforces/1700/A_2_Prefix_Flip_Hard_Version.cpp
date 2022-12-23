#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        string b;
        cin >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> ans;
            int l = 0, r = n - 1;
            int flip = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (flip == 0)
                {
                    if (b[i] == a[l])
                    {
                        ans.push_back(1);
                    }
                    l++;
                    int len = i + 1;
                    ans.push_back(len);
                }
                else
                {
                    if (b[i] != a[r])
                    {
                        ans.push_back(1);
                    }
                    r--;
                    int len = i + 1;
                    ans.push_back(len);
                }
                flip ^= 1;
            }
            cout << ans.size() << " ";
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}