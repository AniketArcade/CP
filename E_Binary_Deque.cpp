#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,s;
vector<int> a(200010);
vector<int> pref(200010);
void solve()
{
     cin>>n>>s;
     int st=0;
     pref[0] = 0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            st+=a[i];
            pref[i]=pref[i-1]+a[i];
        }
        if(st<s) {cout<<-1;return;}
        int ans=0;
        int tail=1,head=0;
        int sum=0;
        while(tail<=n)
        {
            while(head+1<=n && sum+a[head+1]<=s)
            {
                head++;
                sum+=a[head];
            }
            if(sum==s) ans=max(ans,head-tail+1);
            if(tail<=head){
                sum-=a[tail];
                tail++;
            }
            else {
                tail++;
                head=tail-1;
            }
        }
        cout<<n-ans;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}