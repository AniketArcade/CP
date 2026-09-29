#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    vector<int>b(n);
    for(int i=0;i<n;i++){cin>>b[i];}
    vector<int>c(n);
    for(int i=0;i<n;i++){cin>>c[i];}
    bool ok=true;
    for(int i=1;i<=n;i++){
        vector<bool>check(n+1,true);
        check[i]=false;
        for(int j=0;j<n;j++){
            if(a[j]==i){break;}
            check[a[j]]=false;
        } for(int j=0;j<n;j++){
            if(b[j]==i){break;}
            check[b[j]]=false;
        }
        for(int j=1;j<=n;j++){
            if(check[j]){
                if(c[j-1]>c[i-1]){ok=false;}
            }
        }
    }
    if(ok){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}


    return 0;}
