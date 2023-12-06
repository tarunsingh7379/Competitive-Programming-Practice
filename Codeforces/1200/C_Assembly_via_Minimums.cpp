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
        int N = n * (n - 1) / 2;
        int b[N];
        for (int i = 0; i < N; i++)
        {
            cin >> b[i];
        }
        sort(b, b + N);
        int x = n - 1;
        int i = 0;
        vector<int> ans;
        while (i < N)
        {
            int cnt = 1;
            while (i < N - 1 && b[i] == b[i + 1] && cnt < x)
            {
                i++;
                cnt++;
            }
            ans.push_back(b[i]);
            x--;
            i++;
        }
        ans.push_back(1e9);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}