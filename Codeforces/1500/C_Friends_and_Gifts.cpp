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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> used(n + 1, 0);
    vector<int> ind;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            used[a[i]] = 1;
        }
        else
        {
            ind.push_back(i);
        }
    }
    vector<int> problematic_val, problematic_ind;
    for (auto i : ind)
    {
        if (!used[i + 1])
        {
            problematic_ind.push_back(i);
            problematic_val.push_back(i + 1);
        }
    }
    int j = 0;
    if (problematic_val.size() > 1)
    {
        rotate(problematic_val.begin(), problematic_val.begin() + 1, problematic_val.end());
        for (auto i : problematic_ind)
        {
            if (j == problematic_val.size())
                break;
            a[i] = problematic_val[j];
            used[problematic_val[j]] = 1;
            j++;
        }
    }
    else if (problematic_val.size() == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 && problematic_val[0] != (i + 1))
            {
                a[i] = problematic_val[0];
                used[problematic_val[0]] = 1;
                break;
            }
        }
    }
    vector<int> notused;
    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            notused.push_back(i);
        }
    }
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = notused[j++];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}