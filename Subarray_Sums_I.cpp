#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];

    int ans=0;
    int tail=0,head=-1;
    int sum=0;
    while(tail<n){
        while(head<n-1 && (sum+a[head+1])<=x){
            head++;
            sum +=a[head];
        }
        if(sum==x) ans++;
        if(sum!=0)sum -=a[tail];
        if(tail<=head){
            tail++;
        }
        else {
           tail++;
           head=tail-1;
        }
    }
    cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();

    return 0;
}