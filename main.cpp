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

int32_t main()
{
    int t, n, tmp;
    ll a, b, c, d;
    cin >> t;
    string s;

    while (t--)
    {
        cin >> c >> d;
        cin >> a >> b;
        cout << min(a * abs(d - c) + b * min(d, c), a * (c + d)) << endl;
    }
}