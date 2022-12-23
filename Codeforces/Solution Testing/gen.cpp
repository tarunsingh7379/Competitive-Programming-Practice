// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int

    int n = rand() % 100 + 1;
    int s = rand() % 100 + n + 1;
    cout << n << " " << s << endl;
}
