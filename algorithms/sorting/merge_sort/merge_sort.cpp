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

void merge(int low, int mid, int high, vi &v) {
    vi l(v.begin() + low, v.begin() + mid + 1);       // [left, mid + 1)
    vi r(v.begin() + mid + 1, v.begin() + high + 1);  // [mid + 1, high + 1)

    int i = 0, j = 0;
    int k = low;
    while (i < l.size() && j < r.size()) {
        if (l[i] >= r[j])
            v[k++] = r[j++];
        else
            v[k++] = l[i++];
    }

    while (i < l.size()) {
        v[k++] = l[i++];
    }

    while (j < r.size()) {
        v[k++] = r[j++];
    }
}

void mergeSort(int low, int high, vi &v) {
    if (low < high) {  // not low <= high, cz low == high means 1 element, which
                       // is already sorted.
        int mid = low + (high - low) / 2;
        mergeSort(low, mid, v);
        mergeSort(mid + 1, high, v);
        merge(low, mid, high, v);
    }
}

void mergeSort(vi &v) { mergeSort(0, v.size() - 1, v); }

int32_t main() {
    vi v = {3, 2, 1, 5, -1, 6, 3, 7, -37, 3, 5, 7, -9, 9, 4, 3, 8, 5, 0};
    // vi v = {1, 5, 6, 7, 2, 3, 4};
    mergeSort(v);
    printvi(v);
}