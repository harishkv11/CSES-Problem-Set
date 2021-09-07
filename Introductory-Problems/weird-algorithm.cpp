#include <bits/stdc++.h>
#include <cstring>
using namespace std;
 
void solve(long long n)
{
  if(n==1)
    return;
    
  else if(n%2==0){
    cout<<n<<" ";
    solve(n/2);
  }
  
  else if(n%2!=0){
    cout<<n<<" ";
    solve((3*n)+1);
  }
}
 
int main()
{
    long long n;
    cin>>n;
    solve(n);
    cout<<1;
    return 0;
}