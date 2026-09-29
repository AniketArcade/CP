#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,d;cin>>n;
    cin>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());int ans=1;
    if(n%2){
     int  cnt=0;
      int i=0;while(i<n){
        if(i<n-1 && a[i+1]-a[i]>d){
            i++;cnt++;
        } else{i+=2;}
      } if(cnt>=2){
        ans=0;
      }
    }
    else{
       
       for(int i=0;i<n;i+=2){
        if(a[i+1]-a[i]>d){
            ans=0;
        }
       }
    }
    if(ans) cout<<"YES";
    else cout<<"NO";

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}