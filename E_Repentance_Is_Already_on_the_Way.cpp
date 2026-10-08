#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];

    if(n==1){
        cout<<(a[1]==b[1]? 2:1);
        return;
    }
    if(n==2){
        int ans1 =0;
        ans1 +=((a[1]==b[1])?2:1);
        ans1 +=((b[1]==a[2]?2:1));
        ans1 +=((a[2]==b[2])?2:1);

        int ans2=0;
        ans2 +=((a[1]==b[2])?2:1);
        ans2 +=((a[2]==b[2])?2:1);
        ans2 +=((a[2]==b[1])?2:1);
        cout<<max(ans1,ans2);
        return ;
    }
    vector<int> pc1(n+2),pc2(n+2),sc3(n+2);
    pc1[1]=0;
    pc2[1]=0;
    sc3[n]=0;

     int ans=0;
     for(int i=1;i<=n-1;i++){
        int c1=0,c2=0,c3=0;
        c1 += ( (a[i]==b[i]) ?2:1);
        c1 += ( (b[i]==a[i+1]) ?2:1);
        pc1[i+1]=c1+pc1[i];
        c2 +=( (a[i]==b[i]) ?2:1);
         c2 +=( (a[i]==b[i+1]) ?2:1);
         pc2[i+1]=pc2[i]+c2;
     }
     for(int i=n-1;i>=1;i--){ int c3=0;
           c3 +=( (a[i]==b[i+1]) ?2:1);
           c3 +=( (b[i]==a[i+1]) ?2:1);
           sc3[i]=c3+sc3[i+1];

     }
     for(int i=1;i<=n;i++)
     {
       int an=0;
       an=pc1[i]+sc3[i]+((a[n]==b[n])?2:1);
       ans=max(ans,an);
       an=pc2[i]+sc3[i]+((a[n]==b[n])?2:1);
     }
    //  ans++;
    //  if(a[n]==b[n]) ans++;
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