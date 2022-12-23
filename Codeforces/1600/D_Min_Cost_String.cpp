#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int n, k;
int cur[26];
vector<int> path;

void dfs(int v)
{
    while (cur[v] < k)
    {
        int u = cur[v]++;
        dfs(u);
        path.push_back(u);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    dfs(0);
    for (auto num : path)
    {
        cout << (char)(num + 'a') << " ";
    }
    cout << endl;
    printf("a");
    for (int i = 0; i < n - 1; ++i)
        printf("%c", path[i % path.size()] + 'a');

    return 0;
}