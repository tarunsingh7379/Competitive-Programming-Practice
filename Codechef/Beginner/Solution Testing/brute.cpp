#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<int> A, B;
    while (a)
    {
        A.push_back(a % 10);
        a /= 10;
    }
    while (b)
    {
        B.push_back(b % 10);
        b /= 10;
    }
    while (A.size() < B.size())
        A.push_back(0);
    while (B.size() < A.size())
        B.push_back(0);
    for (int i = 0; i < A.size(); i++)
    {
        A[i] += B[i];
    }
    int ans = 0;
    reverse(begin(A), end(A));
    for (auto it : A)
    {
        ans = ans * 10 + it % 10;
    }
    cout << ans << endl;

    return 0;
}