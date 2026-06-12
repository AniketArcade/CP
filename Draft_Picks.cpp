#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{ 
    int n,k;cin>>n>>k;
    bool flip=true;
    vector<int> a(n+1,0);
    while(k>=1)
    {
        if(flip){
            for(int i=1;i<=n;i++)
            {
           if(k>=1){
                a[i]+= k;
            k--;
           }
           else break;
        }
       }
       else{
        for(int i=n;i>=1;i--){
           if(k>=1){
                a[i] +=k;
            k--;
           }
           else break;
        }
        
      flip = !flip;  
    }
    sort(a.begin(),a.end());
    cout<<a[n];
        
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
    int t;cin>>t;while(t--)
    {solve();if(t>0)cout<<"\n";}
 

    return 0;
}