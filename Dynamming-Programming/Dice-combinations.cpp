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
 
 
bool powerOfTwo(int n){
    if(!(n&(n-1)))
        return true;
    else return false;
}
 
void seiveOfErat(int m,int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
 
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    // for(int i=m;i<=n;i++){
    //     if(i!=1){
    //         if(prime[i])
    //             cout<<i<<endl;
    //     }
    // }
}
 
 
int kadane(int a[],int n){
    int curr=a[0],maxi=a[0];
    forn(i,n){
        curr=max(curr+a[i],a[i]);
        maxi=max(curr,maxi);
    }
    return maxi;
}
 
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
 
int binomial(int x,int y){
    int dp[x+1][y+1];
    for(int i=0;i<=x;i++){
        for(int j=0;j<=min(i,y);j++){
            if(j==0||j==i)
                dp[i][j]=1;
            else
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    return dp[x][y];
}
int binsearch(int a[],int l,int h,int key){
    if(h<l) return -1;
    int mid=l+(h-l)/2;
    if(a[mid]==key) return mid;
    else if(key<a[mid]) return binsearch(a,l,mid-1,key);
    return binsearch(a,mid+1,h,key);
}
int sumDigits(int n){
    if(!n) return 0;
    else return n%10+sumDigits(n/10);
}
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
 
int binary(vi a,int l,int h,int first){
    if(l<h){
        int mid=l+(h-l)/2;
        if(a[mid]!=mid+first) return binary(a,l,mid,first);
        else return binary(a,mid+1,h,first);
    }
    return l+first;
}
 
 
int factorial(int x){
    if(x==1) return 1;
    else return factorial(x-1)*x;
}
bool perfectsq(int x){
    int y=sqrt(x);
    return y*y==x;
}
 
bool ispoweroften(int n){
    float x=log10(n);
    int y=log10(n);
    return x==y;
}
 
int total_prime_factors(int n){
    int ans=0;
    while(n%2==0){
        ans++;
        n/=2;
    }
 
    for(int i=3;i<=sqrt(n);i++){
        while(n%i==0){
            ans++;
            n/=i;
        }
    }
    if(n>2) ans++;
    return ans;
}
 
int solve1(int n,vector<int> &dp){
    if(n==0) return 1;
    else if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i=1;i<=6;i++){
        if(i<=n) ans=(ans+solve1(n-i,dp))%mod;
    }
    return dp[n]=ans;
}
void solve(){
    int n;cin>>n;
    vector<int> dp(n+1,-1);
    cout<<solve1(n,dp)<<endl;
}
 
int32_t main()
{
    hkv();
    solve();
    // w(t) solve();
    return 0;
}