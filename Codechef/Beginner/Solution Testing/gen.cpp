// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    cout << a << " " << b << endl;
}
