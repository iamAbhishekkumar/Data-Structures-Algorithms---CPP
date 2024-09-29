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

bool isPalin(string &s, int i)
{
    if (i == s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return isPalin(s, i + 1);
}

bool isPalin(string s)
{
    if (s.size() == 1 || s.size() == 0)
        return true;
    if (s[0] != s[s.size() - 1])
        return false;
    return isPalin(s.substr(1, s.size()));
}

int32_t main()
{
    vector<string> vs = {"abba", "abbbba", "abada", "kgsq", "da", "", "1"};
    for (auto i : vs)
    {
        cout << i << " " << isPalin(i, 0) << endl;
        cout << i << " " << isPalin(i) << endl
             << endl;
    }
}