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
    int flag = 1;
    int left = 0, right = n - 1;
    while (left < n - 1 && a[left] < a[left + 1])
    {
        left++;
    }
    while (right > 0 && a[right] < a[right - 1])
    {
        right--;
    }
    while (left <= right)
    {
        if (a[left] != a[right])
        {
            flag = 0;
            break;
        }
        left++;
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}