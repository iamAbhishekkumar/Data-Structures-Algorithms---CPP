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

// n - 1 comparisons in 1st iter
// n - 2 comparisons in 2nd iter
// that is why, inner loops goes to n - 1 - i;
void bubble_sort(vi &v) {
    int n = sz(v);
    int flag;
    int tmp;
    for (int i = 0; i < n; i++) {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }
}

int32_t main() {
    vi v = {3, 2, 1, 5, -1, 6, 3, 7, -37, 3, 5, 7, -9, 9, 4, 3, 8, 5, 0};
    vi v2 = {1, 2, 3, 4, 5, 6, 7};
    bubble_sort(v2);
    printvi(v2);
}
