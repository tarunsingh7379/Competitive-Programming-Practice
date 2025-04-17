#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void insert_coordinates(int &row, int &col, set<pair<int, int>> &ans)
{
    ans.insert({row, col});
    ans.insert({row, col + 1});
    ans.insert({row + 1, col});
    ans.insert({row + 1, col + 1});
    row++;
    col++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int row = 0, col = 0;
    set<pair<int, int>> ans;
    insert_coordinates(row, col, ans);
    for (int i = 0; i < n; i++)
    {
        insert_coordinates(row, col, ans);
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}