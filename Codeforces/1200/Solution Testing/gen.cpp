// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int n = rand() % 10 + 1;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << rand() % 10 + 1 << " ";
    }
    cout << endl;
}
