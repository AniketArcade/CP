#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   
   bool flip=false;
   vector<int> ans;
   int cnt=0;
   for(int i=n-1;i>=0;i--)
   {
    if(flip){
        if(a[i]<0) {
            ans.push_back(i+1);cnt++;
            flip= !flip;
        }
    }
    else {
        if(a[i]>0){
            ans.push_back(i+1);cnt++;
            flip =!flip;
        }
    }
   }
   cout<<cnt<<"\n";
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
  

    return 0;
}