#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> val,len;
    int i=0;
    while(i<n){
        int j=i;
        while(j<n && a[j]==a[i])j++;
        val.push_back(a[i]);
        len.push_back(j-i);
        i=j;
    }
    int l=val.size();
    if(l==n) {cout<<l;return;}
    bool ok=false;
    for(int k=0;k<l-1;k++){
        if(len[k]>=2 && len[k+1]>=2){
            ok=true;
            break;
        }
    }
    if(ok){cout<<l+2;return;};
    bool ok2=false;
    for(int k=0;k<l;k++){
        if(len[k]>=2){
            bool optionA = (k < l - 1) && (k + 2 > l - 1 || val[k + 2] != val[k]);
            bool optionB = (k > 0) && (k - 2 < 0 || val[k - 2] != val[k]);
            if (optionA || optionB) { ok2 = true; break; }
        }
    }
    if(ok2){cout<<l+1;return;}
    else cout<<l;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}