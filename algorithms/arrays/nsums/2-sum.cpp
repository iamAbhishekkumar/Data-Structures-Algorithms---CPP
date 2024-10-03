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

// 2 sum
// 3 sum
// 4 sum

// two numbers whose sum is target, print all those such pairs
// soln1 : convert  to hashmap, and for each 'key' find 'target-key' in the map -> o(n) , o(n) space
// it may contain duplicate pairs
// NOTE : WILL HAVE DUPLICATE PAIRS, BUT INDEX are different.
// CAN USE TWO POINTERS, but it may or may not contain duplicate pairs.
void twoSumSol(vi &v, int target, vpii &ansIndex)
{
    unordered_map<int, int> m;
    int tmp;
    for (int i = 0; i < v.size(); i++)
    {
        tmp = target - v[i];
        if (m.find(tmp) != m.end())
            ansIndex.push_back({i, m[tmp]});
        else
            m[v[i]] = i;
    }
}

// variation: find the unique pairs.
// Using two pointes - O(nlgn) , O(1) - but manipulating the origianl array
// greedy approach
// NOTE : Can use hashmap also, but use set to store the answers and to remove duplicacy.
void twoSumUniquePair(vi &v, int target, vpii &ans)
{
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    int sum;
    while (left < right)
    {
        sum = v[left] + v[right];
        if (sum == target)
        {
            ans.push_back({left, right});

            while (left < right && v[left] == v[left + 1])
                ++left;

            while (left < right && v[right] == v[right + 1])
                --right;
            ++left;
            --right;
        }
        else if (sum > target)
            --right;
        else
            ++left;
    }
}

int32_t main()
{
    vi v = {3, 4, 6, 2, 5, 7, 7, 7, 2, 2, 4, 10};
    // vi v = {4, 4, 4, 4, 4, 4, 4};
    int t = 14;
    vpii ans;
    // twoSumSol1(v, t, ans);
    twoSumUniquePair(v, t, ans);
    for (auto i : ans)
    {
        cout << i.first << "->" << v[i.first] << "\t"
             << i.second << "->" << v[i.second] << " " << endl;
    }
}