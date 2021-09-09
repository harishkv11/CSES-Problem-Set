#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;
 
#define forn(i,n)       for(int i=0;i<n;i++)
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define graph           unordered_map<int,vector<int>>
#define wgraph          unordered_map<int,vector<pair<int,int>>>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define leadingzr(x)    __builtin_clz(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define arr(a,n)          int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
#define w(x)            int x; cin>>x; while(x--)
#define conarr(a,n,k)     int n,k;cin>>n>>k;vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
#define range(x)           (x).begin(),(x).end()
#define endl            "\n"
#define total(x)        accumulate(x.begin(),x.end(),(int)0)
#define printvector(x)  for(int t: x) cout<<t<<" ";
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int add(int x,int y) {int res=x+y; return (res>=mod ? res-mod: res);}
int mul(int x,int y) {int res=x*y; return (res>=mod? res%mod : res);}
int sub(int x,int y) {int res=x-y; return (res<0?res+mod:res);}
int power(int x,int y) {int res=1; x%=mod; while(y){ if(y&1) res=mul(res,x); y>>=1; x=mul(x,x);} return res;}
int mod_inv(int x) {return power(x,mod-2);}
 
void hkv()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void toh(int n,int l,int r,int m,vector<pair<int,int>> &v){
    if(n==1){
        v.push_back({l,r});
        return;
    }
    toh(n-1,l,m,r,v);
    v.push_back({l,r});
    toh(n-1,m,r,l,v);
}
void solve(){
    int n;cin>>n;
    vector<pair<int,int>> v;
    toh(n,1,3,2,v);
    cout<<v.size()<<endl;
    for(auto x: v) cout<<x.first<<" "<<x.second<<endl;
}
int32_t main()
{
    hkv();
    solve();
    // w(t) solve();
    return 0;
}