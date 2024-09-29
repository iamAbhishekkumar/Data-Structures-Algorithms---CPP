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

void bin(int n, string &op)
{
    if (n == 0)
        return;
    bin(n / 2, op);
    op += to_string(n % 2); // example of tail recursion
}

int32_t main()
{
    string ans = "";
    bin(12, ans);
    cout << ans << endl;
}