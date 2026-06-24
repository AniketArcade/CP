#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> w(n);for(int i=0;i<n;i++) cin>>w[i];
      int i=0,j=n-1;
      int a=w[0],b=w[n-1];
      int ans=0;
      while(i<j)
      { 
        if(a==b) {ans=max(ans,i+1+n-j);i++;if(i >= j) break;

        a += w[i];}
        else if(a<b){
            i++;a+=w[i];
        }
        else{ 
            j--;
            b +=w[j];
        }
      }
      cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}