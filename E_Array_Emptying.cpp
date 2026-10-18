#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k;
vector<int> a;
bool check(int s)
{
    int cnt=0;
    int ck=k+s;if(k+s>=n) return true;
    priority_queue<int> pq;
    for(int i=0;i<n;i++) if(a[i]>ck) pq.push(a[i]);
    while(!pq.empty()){
        int cur=pq.top();pq.pop();
        if(cnt>s) return false;
        if(cur<=k+cnt){
            cnt++;
            if(((cur+1)/2)>ck){
                pq.push((cur+1)/2);
            pq.push((cur+1)/2);
            }
        }
        else{
            return false;
        }
    }
    return true;
}
void solve()
{
    cin >> n >> k;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int lo = 0, hi = 2*n;
    int ans=hi;
    while (lo < hi)
    {
        int mid = lo + (hi-lo)/2;
        if (check(mid)){
             hi = mid; 
             ans=mid;
        }
        else {
            lo = mid + 1;
        }
    }
    cout << n + 2*ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}