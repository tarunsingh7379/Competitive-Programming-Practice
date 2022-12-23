#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

struct Node
{
    int x, y;
    int len;
};

struct cmp
{
    bool operator()(Node &a, Node &b)
    {
        if (a.len == b.len)
        {
            return a.x > b.x;
        }
        return a.len < b.len;
    }
};

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
        vector<int> ans(n, 0);
        priority_queue<Node, vector<Node>, cmp> pq;
        Node p;
        p.x = 0;
        p.y = n - 1;
        pq.push(p);
        int cnt = 1;
        while (!pq.empty())
        {
            Node p = pq.top();
            pq.pop();
            int mid = (p.x + p.y) / 2;
            ans[mid] = cnt++;
            if (p.x == p.y)
            {
                continue;
            }
            Node a, b;
            a.x = p.x;
            a.y = mid - 1;
            a.len = a.y - a.x + 1;
            b.x = mid + 1;
            b.y = p.y;
            b.len = b.y - b.x + 1;
            if (a.len > 0)
            {
                pq.push(a);
            }
            if (b.len > 0)
            {
                pq.push(b);
            }
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}