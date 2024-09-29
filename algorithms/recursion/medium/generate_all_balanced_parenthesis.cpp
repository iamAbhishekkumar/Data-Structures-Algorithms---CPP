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
#define vs vector<string>
/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:
Input: n = 1
Output: ["()"]
*/

void generate(string &s, int open, int close, vs &ans)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(s);
        return;
    }

    if (open > 0)
    {
        s.push_back('(');
        generate(s, open - 1, close, ans);
        s.pop_back();
    }

    if (close > 0 && open < close)
    {
        s.push_back(')');
        generate(s, open, close - 1, ans);
        s.pop_back();
    }
}

int32_t main()
{

    int n;
    cin >> n;
    string s = "";
    vs ans;
    generate(s, n, n, ans);
    for (auto i : ans)
    {
        cout << i << endl;
    }
}