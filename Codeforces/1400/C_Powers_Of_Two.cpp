#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    priority_queue<int> pq;
    for (int i = 0; i < 30; i++)
    {
        if (n & (1LL << i))
        {
            pq.push(1LL << i);
        }
    }
    while (pq.size() < k)
    {
        int x = pq.top();
        pq.pop();
        if (x != 1)
        {
            pq.push(x / 2);
            pq.push(x / 2);
        }
        else
        {
            break;
        }
    }
    if (pq.size() != k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }

    return 0;
}