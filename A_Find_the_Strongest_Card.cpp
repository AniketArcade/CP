#include<iostream>
#include<vector>
using namespace std;
int main(){
    while(1){
        int n,d;
        cin>>n>>d;
        if(n==0 && d==0){break;}
        int cnt=0;
        vector<int>x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        } int pos=x[0]+d;
        int i=0;
        while(i<n){
            cnt++;
            while(i<n && abs(x[i]-pos)<=d){
                i++;
            } if(i<n){
                pos=x[i]+d;
            }
        } cout<<cnt<<endl;
    }
}