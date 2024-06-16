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
    vector<int> freq(6, 0);
    vector<int> temp = {4, 8, 15, 16, 23, 42};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (a[i] == temp[j])
            {
                if (j - 1 >= 0)
                {
                    if (freq[j - 1])
                    {
                        freq[j - 1]--;
                        freq[j]++;
                    }
                }
                else
                {
                    freq[j]++;
                }
            }
        }
    }
    cout << n - 6 * freq[5] << endl;

    return 0;
}