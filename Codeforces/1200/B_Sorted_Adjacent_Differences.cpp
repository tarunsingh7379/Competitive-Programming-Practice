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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        deque<int> q;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                q.push_front(a[i]);
            }
            else
            {
                q.push_back(a[i]);
            }
        }
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }
        cout << endl;
        t--;
    }

    return 0;
}