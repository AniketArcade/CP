#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   vector<int> a(n+1);
   for(int i=1;i<=n;i++) cin>>a[i];
   int val1=1,val2=-1;
   vector<pair<int,int>> v;
   for(int i=2;i<=n;i++){
    if(a[i]!=a[1]){
           val2=i;
        //   v.push_back({1,i});
          break;
    }
   }


   if(val2==-1){
    cout<<"NO"<<"\n";
    return;
   }
    for(int i=2;i<=n;i++)
   {
    if(a[i]==a[val2]){
        v.push_back({1,i});
    }
    else if(a[i]!=a[val1]){
        v.push_back({1,i});
    }
    else {
        v.push_back({val2,i});
    }
   }
   cout<<"YES"<<"\n";
   for(auto x:v){
    cout<<x.first<<" "<<x.second<<"\n";
   }

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   solve();
   return 0;
}