#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> arr(n+1);
    vector<int> index(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        index[arr[i]]=i;
    }
    int round=1;
    for(int i=2;i<=n;i++){
        if(index[i]<index[i-1])round++;
    }
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        if(abs(arr[a]-arr[b])==1){
            if(a>b){
                if(arr[a]<arr[b]){round--;}
                else {round++;}
            }
            else {
                if(arr[a]>arr[b]){round--;}
                else {round++;}
            }
        }
        else {
            if(arr[a]>1){
            if(index[arr[a]]<index[arr[a]-1]){
                if(b>index[arr[a]-1]){
                    round++;
                }
            }
            else{
                if(b<index[arr[a]-1]){
                    round--;
                }
            }
        }
        if(arr[a]<n){
            if(index[arr[a]]<index[arr[a]+1]){
                if(b>index[arr[a]+1]){
                    round++;
                }
            }
            else{
                if(b<index[arr[a]+1]){
                    round--;
                }
            }
        }
        if(arr[b]>1){
            if(index[arr[b]]<index[arr[b]-1]){
                if(a>index[arr[b]-1]){
                    round++;
                }
            }
            else{
                if(a<index[arr[b]-1]){
                    round--;
                }
            }
        }
        if(arr[b]<n){
            if(index[arr[b]]<index[arr[b]+1]){
                if(a>index[arr[b]+1]){
                    round++;
                }
            }
            else{
                if(a<index[arr[b]+1]){
                    round--;
                }
            }
        }
        }

       
        swap(arr[a],arr[b]);
        swap(index[arr[a]],index[arr[b]]);
             cout<<round<<"\n";

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