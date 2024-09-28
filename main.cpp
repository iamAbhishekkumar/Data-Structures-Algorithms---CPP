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
#define vl vector<long long int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define vpii vector<pair<int, int>>
#define piv pair<int, vector<int>>

int32_t main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll sum = 0, tmp;
    while (n--)
    {
        cin >> tmp;
        sum += tmp;
    }
    cout << k - sum << endl;
    cout << 81 + 79;
}