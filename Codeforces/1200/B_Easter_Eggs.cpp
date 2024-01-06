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
    string s = "ROYG";
    int ind = 0;
    for (int i = 0; i < n - 3; i++)
    {
        cout << s[ind++];
        ind %= 4;
    }
    cout << "BIV" << endl;
    return 0;
}