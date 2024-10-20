// longest subarray with given sum (positive + negatives)

// Length of the longest subarray with zero Sum also print the array
// longest subarray whose sum is divible by k

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
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
#define pii pair<int, int>
#define pp pair<pair<int, int>, pair<int, int>>
#define printvi(v) \
    for (int i : v) cout << i << " ";

// count subarray with given sum
int countSubarrayWithSumK(vector<int>& arr, int tar) {
    unordered_map<int, int> m;
    m[0] = 1;
    int ans = 0;
    int ps = 0;
    for (int i : arr) {
        ps += i;
        if (m.find(ps - tar) != m.end()) {
            ans += m[ps - tar];
        }
        ++m[ps];
    }
    return ans;
}
int32_t main() {}