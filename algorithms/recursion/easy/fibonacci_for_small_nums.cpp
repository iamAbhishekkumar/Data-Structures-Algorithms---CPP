#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define vpii vector<pair<int, int>>

int genFib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return genFib(n - 1) + genFib(n - 2);
}

void printNTermsFib(int n)
{
    if (n == -1)
        return;
    printNTermsFib(n - 1);
    cout << genFib(n) << " ";
}

int32_t main()
{
    int n;
    cin >> n;
    --n;
    printNTermsFib(n);
    // cout << genFib(1);
}