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

/*
Intutuion : If some element occurs more than n/2 times,
then it wouldn't be cancelled.

for n/3 -> at max, their are only two possible answers
Why? cz floor(n/3) * 3 <= n.

for example, n = 8, so n/3 = 2, thus to get occurence of > 2, means
minimum occursence is 3 (any element occuring 3 times is our answer).

BUT, 3 + 3 + 3 = 9 not equal to 8, thus it shows at max we can have 2 elements only whose
occurence is more then n/3.

Similarly for n/4, max 3 elements.
*/
int32_t main()
{
}