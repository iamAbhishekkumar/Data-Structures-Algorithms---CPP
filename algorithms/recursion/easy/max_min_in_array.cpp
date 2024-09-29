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

void getMaxMin(vi &v, int n, int &mx, int &mn)
{
    if (n == 1)
    {
        return;
    }
    getMaxMin(v, n - 1, mx, mn);
    mx = max(mx, v[n]);
    mn = min(mn, v[n]);
}

int32_t main()
{

    int max = INT_MIN;
    int min = INT_MAX;
    vi v = {5, 5, 3, 4, -3, 7, 8, 6, 5, 34, -42, 4, 324, 24, -2424, 234, 124, 0};
    getMaxMin(v, v.size() - 1, max, min);
    cout << max << " " << min;
}