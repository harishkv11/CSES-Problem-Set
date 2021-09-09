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
 
void solve(int c){
    int d=ceil(log2(c));
    int n=pow(2,d);
    int ans=INT_MIN;
    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int res;
            res=i^j;
            if(res==c){
                ans=max(ans,i*j);
                break;
            }
        }
    }
    cout<<ans<<endl;
}
 
 
int32_t main()
{
    hkv();
    int n;cin>>n;
    fo(i,1,n+1){
        int a1=i*i,a2=a1*(a1-1)/2;
        if(i>2)
            a2-=4*(i-1)*(i-2);
        cout<<a2<<endl;
    }
    return 0;
}