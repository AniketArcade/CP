#include<iostream>
#include<vector>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0) break;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> left(n);
        vector<int> right(n);
        int mn = a[0];left[0] = mn;
        for(int i = 0; i < n; i++){
            if(a[i] > mn){
                left[i] = mn;
            }
            else {
                mn = a[i]; left[i] = mn;
            };
        }
        int mn1 = a[n-1]; right[n-1] = mn1;
        for(int i = n-1; i >=0; i--){
            if(a[i] > mn1) right[i] = mn1;
            else{
                mn1 = a[i];
                right[i] = mn1;
            }
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i] - max(left[i],right[i]);
        }
        cout << sum << "\n";
    }
}