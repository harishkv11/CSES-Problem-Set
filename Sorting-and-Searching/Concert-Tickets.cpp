#include<bits/stdc++.h>
using namespace std;
 
#define fo(i,a,b)         for(int i=a;i<b;i++)
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
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

void hkv()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}
 
//Sort By Second
bool cm(const pair<int,int> &a, const pair<int,int> &b){
    return a.second<b.second;
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
    for(int i=m;i<=n;i++){
        if(i!=1){
            if(prime[i])
                cout<<i<<endl;
        }
    }
}
 
 
int kadane(int a[],int n){
    int curr=a[0],maxi=a[0];
    fo(i,1,n){
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
 
 
int32_t main()
{
    hkv();
    int n,m;cin>>n>>m;
    set<vector<int> > s;
    fo(i,0,n){
        int x;cin>>x;
        vi a;
        a.pb(x);
        a.pb(i);
        s.insert(a);
    }
    fo(i,0,m){
        int t;cin>>t;
        auto it = s.lower_bound({t+1,0});
        if(it==s.begin())
            cout<<"-1"<<endl;
        else{
            it--;
            cout<<(*it)[0]<<endl;
            s.erase(it);
        }
    }
    return 0;
}