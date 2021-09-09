#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define ll long long
#define l long
 
 
int main()
{
    ll n;
    cin>>n;
    
    ll x=5;
    ll zeros=0;
    while(x<=n){
      zeros += (n/x);
      x *= 5;
    }
    
    cout<<zeros<<endl;
    return 0;
}