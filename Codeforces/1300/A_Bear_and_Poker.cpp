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
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        while (a[i] > 0 && a[i] % 2 == 0)
        {
            a[i] /= 2;
        }
        while (a[i] > 0 && a[i] % 3 == 0)
        {
            a[i] /= 3;
        }
        st.insert(a[i]);
    }
    if (st.size() == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}