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

// 3 sum

// three numbers whose sum is target, print all those such pairs
// soln1 : do two sum for target - v[i], and find this in j = i + 1.
// CAN USE TWO POINTERS, but it may or may not contain duplicate pairs.
// THIS May cause TLE - CAUSED TLE IN LEETCODE
vector<vector<int>> threeSum(vi &v, int target)
{
    set<vector<int>> ans;
    unordered_map<int, int> m;
    int new_tar;
    int p = 0;
    for (int i = 0; i < v.size(); i++)
    {
        new_tar = target - v[i]; // we need to find new_tar
        unordered_set<int> m;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (m.find(new_tar - v[j]) != m.end())
            {
                vector<int> res({v[i], v[j], new_tar - v[j]});
                sort(res.begin(), res.end());
                ans.insert(res);
            }
            m.insert(v[j]);
        }
    }
    vector<vector<int>> answer(ans.begin(), ans.end());
    return answer;
}

// More optmized
// O(n2) , O(1) space
vector<vector<int>> threeSum2(vi &v, int target)
{
}

int32_t main()
{
    vi v = {3, 4, 6, 2, 5, 10, 1, 0};
    // vi v = {4, 4, 4, 4, 4, 4, 4};
    int t = 11;
    // twoSumSol1(v, t, ans);
    vector<vector<int>> ans;
    ans = threeSum(v, t);
    for (auto k : ans)

    {
        cout << k[0] << " " << k[1] << " " << k[2] << endl;
    }
}