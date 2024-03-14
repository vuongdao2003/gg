#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void kq(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void init(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            kq();
        }else {
            init(i+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        init(1);
    }
    return 0;
}