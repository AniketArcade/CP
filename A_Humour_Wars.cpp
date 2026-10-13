#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> suff(n+1);
    suff[n]=0;
    
    sort(a.begin()+1,a.end(),greater<int>());
    for(int i=n-1;i>=1;i--){
        suff[i] =suff[i+1]+a[i+1];
    }
    int ans=0;
    vector<int> cont(n+1);

    for(int i=n;i>=1;i-- ){
      cont[i] +=(n-i+2)*a[i];
      cont[i] +=suff[i];
    }

    for(int i=1;i<=n;i++){
        int len=n-i;
        if((2*len-1)<=m){
            ans +=cont[i];
            m-= (2*len-1);
        }
        else {
            ans +=2*a[i];m--;
            if(m<=0) break;
            if(m%2==0){
                for(int j=i+1;j<=i+(m/2);j++){
                    ans += (2*a[j]);
                }
            }
            else {
                for(int j=i+1;j<=i+(m/2);j++){
                    ans += (2*a[j]);
                }
                ans +=(a[i+(m/2)+1]);
            }
            break;
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