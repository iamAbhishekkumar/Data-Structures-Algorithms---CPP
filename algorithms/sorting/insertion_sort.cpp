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

// we divide the array in two parts, sorted and unsorted
// we take each element from unsorted part and place it in sprted part, by
// moving elements right
void insertion_sort(vi &v) {
    int n = sz(v);
    // i : represents start index of unsorted part
    for (int i = 1; i < n; i++) {
        int k = v[i];
        int j = i - 1;  // last index of sorted part
        while (j >= 0 && k < v[j]) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = k;
    }
}

int32_t main() {
    vi v = {3, 2, 1, 5, -1, 6, 3, 7, -37, 3, 5, 7, -9, 9, 4, 3, 8, 5, 0};
    vi v2 = {1, 2, 3, 4, 5, 6, 7};
    insertion_sort(v);
    insertion_sort(v2);
    printvi(v);
    cout << endl;
    printvi(v2);
    cout << endl;
}