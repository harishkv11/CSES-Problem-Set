#include <bits/stdc++.h>
#include <cstring>
using namespace std;
 
void solve(long long a[],long n)
{
  int h[n+1]={0};
  for(int i=0;i<n-1;i++){
    h[a[i]]=1;
  }
  
  for(int i=1;i<n+1;i++){
    if(h[i]==0)
      cout<<i<<endl;
  }
}
 
int main()
{
    long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n-1;i++){
      cin>>a[i];
    }
    solve(a,n);
    return 0;
}