
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define int ll
#define neg_inf LLONG_MIN
#define all(x) x.begin(), x.end()
#define all2(x) x, x + sizeof(x) / sizeof(x[0])
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_font
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vll vector<vl>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define irep(i, a, b) for (int i = a; i > b; i--)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define inf 1000000000000000000ll
#define mod 1000000007ll
#define mod2 100000009ll
#define sqr(a) a * 1ll * a
#define mpi map<int, int>
#define mpl map<ll, ll>
using namespace std;
using namespace __gnu_pbds;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
void solve()
{
     
}
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int i = 0, j = 0, m = 0;
        while (j < n){
        mp[s[j]]++;
        if (mp.size() > j - i + 1)
            j++;
        else if (mp.size() == j - i + 1){
            m = max(m, j - i + 1);
            j++;
        }
        else{
            while (mp.size() < j - i + 1) {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            if (mp.size() == j - i + 1)
                m = max(m, j - i + 1);
            j++;
        }
    }
    return m;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
