#include<bits/stdc++.h>
using namespace std;
void init(){
    long long n;
    cin>>n;
    long long A[n+1],B[n+1];
    for(int i=0;i<n;i++){
        cin>>A[i];
        B[i]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]<A[j]) {
                B[i]=A[j];break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
    }
    return 0;
}