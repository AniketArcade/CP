#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m,k;cin>>n>>m>>k;
    priority_queue<int>pq;
    int cntk=0;
    for(int i=0;i<n;i++){
      int x;cin>>x;
      if(x>=k){
        cntk += x/k;
        x = x%k;
        pq.push(x);
      }
      else pq.push(x);
    }
    int ans=cntk*k;
    int usedbox=cntk+ans;
    if(usedbox>=m){
        ans= (m/(k+1))*k;
        if(m%(k+1)!=0){
            ans += m%(k+1);
        } 
        cout<<ans;return;
    }
    while(!pq.empty() && usedbox<m)
    {
      int x = pq.top();pq.pop();
      if(x==0){
        continue;
      }
      else {
        int rem=m-usedbox;   
        if(x>=rem){
            ans +=rem;
            usedbox += rem;
        }
        else{
            ans += x;
            usedbox += x+1;
        }
      }
    }
    cout<<ans;  
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
  
    return 0;
}