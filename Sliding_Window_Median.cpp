#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int> x;
void solve()
{
 cin>>n>>k;
 x.resize(n);for(int i=0;i<n;i++) cin>>x[i];
 multiset<int> ms;
 for(int i=0;i<k;i++) ms.insert(x[i]);
 auto mid=next(ms.begin(),(k-1)/2);
 cout<<*mid<<" ";
 for(int i=k;i<n;i++){
    int add=x[i],remove=x[i-k];
     ms.insert(add);
    if(add<*mid)--mid;
   
    if(remove<=*mid){
        mid++;  
    }
    ms.erase(ms.find(remove));
    cout<<*mid<<" ";
 }
 
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