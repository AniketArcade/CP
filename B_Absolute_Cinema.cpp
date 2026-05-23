#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
     int n;
     cin>>n;
     int a[n],b[n];
     int ai;
     int amax=0;

     for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>amax) {
            amax=a[i];
            ai=i;
        }
     }
     int bi;
     int bmax=0;
     for(int i=0;i<n;i++)
     {
           cin>>b[i];
           if(b[i]>bmax){
            bmax=b[i];
            bi=i;
           }
     }
     

     for(int i=0;i<n;i++)
     {
       
        if(a[i]>b[i]){
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
      }
     }
     int ans=0;
     for(int i=0;i<n;i++) {
        ans +=b[i];
     }
     int an=0;
     for(int i=0;i<n;i++){
        an=max(an,a[i]);
     }
     cout<<ans+an;

     
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}