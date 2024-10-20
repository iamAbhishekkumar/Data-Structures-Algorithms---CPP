#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
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

int32_t main() {
    int n, s, t;
    cin >> n >> s >> t;
    pair<int, int> p1, p2;
    int a, b, c, d;
    vector<pair<pair<int, int>, pair<int, int>>> v;
    while (n) {
        cin >> a >> b >> c >> d;
        v.push_back({{a, b}, {c, d}});
        --n;
    }
    sort(v.begin(), v.end());

    for (auto i : v) {
        cout << i.first.first << ", " << i.first.second << " -> ";
        cout << i.second.first << ", " << i.second.second << endl;
    }
}