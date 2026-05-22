#include <bits/stdc++.h>
using namespace std;
#define int long long
int a,n,d1,d2;
vector<int> nums[10][10];
int pow10[18];
void rec(int level,int prev,int d1,int d2){
    if(prev >(int) 9e17) return ;
    nums[d1][d2].push_back(prev);
    if(level==18){
       return ;
    }
    
    rec(level+1,pow10[level]*d1+prev,d1,d2);
   if(d1!=d2) rec(level+1,pow10[level]*d2+prev,d1,d2);
}
void pre(){
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            rec(1,i,i,j);
            rec(1,j,i,j);
            sort(nums[i][j].begin(),nums[i][j].end());
        }
    }

}
void solve()
{
    cin>>a>>n>>d1>>d2;
 
     int ans=2e18;
    // for(int i=0;i<nums[d1][d2].size();i++){
    //     ans=min(ans,abs(a-nums[d1][d2][i]));
    // }
    auto it =lower_bound(nums[d1][d2].begin(),nums[d1][d2].end(),a);
    if(it!=nums[d1][d2].end()) ans=min(ans,abs(a-*it));
    if(it!=nums[d1][d2].begin()){
        it--;
        ans=min(ans,abs(a-*it));
    }
    cout<<ans<<"\n";

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pow10[0]=1;
     for(int i=1;i<=17;i++)
    {
        pow10[i]=pow10[i-1]*10;
    }
    pre();
    int t; cin >> t;
    while (t--) solve();
    return 0;
}