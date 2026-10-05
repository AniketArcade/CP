#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        } vector<int>c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
        } 
        long long ans=0;
        int p=0;
        for(int i=0;i<n;i++){
            bool check=true;
            int k=0;
            while(k<n){
                if(a[k]>=b[(i+k)%n]){check=false;break;}
                k++;
            }
            if(check){p++;}
    }
    int q=0;
        for(int i=0;i<n;i++){
            bool check=true;
            int k=0;
            while(k<n){
                if(b[k]>=c[(i+k)%n]){check=false;break;}
                k++;
            }
            if(check){q++;}
    }
    ans = 1LL*p*q*n;
    cout << ans << endl;
    
}}