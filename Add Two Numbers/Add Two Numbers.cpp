
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

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
       ListNode *temp1 = a;
       ListNode*temp2 = b;
    vector<int> v;
    int r = 0;
    while (temp1 != NULL and temp2 != NULL){
        r = temp1->val + temp2->val + r;
        v.push_back(r % 10);
        r = (r) / 10;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp2 != NULL){
        r = temp2->val + r;
        v.push_back(r % 10);
        r = (r) / 10;
        temp2 = temp2->next;
    }
    while (temp1 != NULL){
        r = temp1->val + r;
       v.push_back(r % 10);
        r = (r) / 10;
        temp1 = temp1->next;
    }
    if(r!=0)
        {
            v.push_back(r);
        }
   
   ListNode *ans=new ListNode(v[0]) ;
    ListNode *p = ans;
    for (int i = 1; i < v.size(); i++){
        p->next = new ListNode(v[i]);
        p = p->next;
    }
    return ans;
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
