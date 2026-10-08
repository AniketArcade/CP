#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<int> a(n+1,0);
    stack <int> st;
    
    for(int i=0;i<n;i++)
    {
      int pos=i+1;
      if(s[i]=='1'){
        st.push(pos);
      }
      else if(s[i]=='2'){
        if(!st.empty()){
            int cur=st.top();
            st.pop();
            a[cur]=1;
        }
        else{
            a[pos]=1;
        }
      }
      else {
         a[pos]=1;
      }
    }
    int k=0;
    for(int i=1;i<=n;i++) if(a[i]) k++;

    cout<<n-k<<"\n";
    for(int i=1;i<=n;i++){
        if(!a[i]){
            cout<<i<<" ";
        }
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