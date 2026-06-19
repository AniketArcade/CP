#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
         if(a[j]>a[i]){
            a[j]=a[i];
            break;
         }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}