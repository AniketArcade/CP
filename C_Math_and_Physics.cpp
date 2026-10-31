#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   vector<int> a(n);
   int sum=0;
   int cnt1=0;

   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    sum+=a[i];
    if(a[i]==1) cnt1++;
   }
   
   if(cnt1==n) {cout<<-1;return;}
   if(n==2){
    if(a[0]>=2 || (a[1]>=2)){
        cout<<sum-1;
        return;
    }
   }
   int is2=0;
   for(int i=1;i<n-1;i++){
    if(a[i]>=2){
        is2=1;
        break;
    }
   }
   if(is2){
    cout<<sum-1;
    return;
   }

   if(a[0]>=2 || (a[n-1]>=2)){
    cout<<sum-n+1;
    return;
   }


   cout<<-1;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
  int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}