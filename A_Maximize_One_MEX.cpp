#include <bits/stdc++.h>
using namespace std;
#define int long long
int mex(vector<int> arr, int m){
    vector<bool> seen(arr.size()+1,0);
    for(int i=0;i<m;i++) seen[arr[i]]=1;
    int x=0;
    while (seen[x]) x++;
    return x;
}

void solve()
{
   int n,k;cin>>n>>k;
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int m=n-k+1;
   int ans=mex(a,m);
   int bi=-1,bj=-1;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        swap(a[i],a[j]);
        int ne=mex(a,m);
        if(ne>ans) {
            ans=ne;
            bi=i+1;
            bj=j+1;
        }
        swap(a[i],a[j]);
    }
   }
   if(bi==-1) cout<<-1;
   else {
    cout<<bi<<" "<<bj;
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