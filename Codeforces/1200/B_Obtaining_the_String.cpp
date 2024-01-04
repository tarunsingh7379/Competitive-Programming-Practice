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
    string a, b;
    cin >> a >> b;
    vector<int> v;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        int ind = -1;
        if (a[i] != b[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == b[i])
                {
                    ind = j;
                    break;
                }
            }
            if (ind == -1)
            {
                flag = 0;
                break;
            }
            for (int j = ind; j > i; j--)
            {
                swap(a[j], a[j - 1]);
                v.push_back(j);
            }
        }
    }
    if (flag == 1)
    {
        cout << v.size() << endl;
        for (auto num : v)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}