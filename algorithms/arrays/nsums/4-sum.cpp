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

// 4 sum

// exactly same as 3 sum, just one another loop
// More optmized
// O(n3) , O(1) space
vector<vector<int>> fourSum(vi &v, int target)
{
    set<vector<int>> ans;
    sort(v.begin(), v.end());
    int left, right;
    ll sum, new_tar;
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1])
        { // this step to remove duplicate i values
            continue;
        }
        for (int p = i + 1; p < v.size(); p++)
        {
            if (p > i + 1 && v[p] == v[p - 1])
            { // this step to remove duplicate i values
                continue;
            }
            new_tar = (ll)target - (ll)v[p] - (ll)v[i];
            left = p + 1;
            right = v.size() - 1;
            while (left < right)
            {
                sum = v[left] + v[right];
                if (sum == new_tar)
                {
                    vector<int> res({v[i], v[p], v[left], v[right]});
                    sort(res.begin(), res.end());
                    ans.insert(res);
                    ++left;
                    --right;

                    // this is for getting RIGHTMOST value in duplicates of v[left]
                    while (left < right && v[left] == v[left - 1])
                        ++left;

                    // this is for getting LEFTMOST value in duplicates of v[right]
                    while (left < right && v[right] == v[right + 1])
                        --right;
                }
                else if (sum > new_tar)
                    --right;
                else
                    ++left;
            }
        }
    }
    vector<vector<int>> answer(ans.begin(), ans.end());
    return answer;
}

int32_t main()
{
    vi v = {1000000000, 1000000000, 1000000000, 1000000000};
    // vi v = {4, 4, 4, 4, 4, 4, 4};
    long long int t = -2949672968;
    // twoSumSol1(v, t, ans);
    vector<vector<int>> ans;
    ans = fourSum(v, t);
    for (auto k : ans)

    {
        cout << k[0] << " " << k[1] << " " << k[2] << " " << k[3] << endl;
    }
}