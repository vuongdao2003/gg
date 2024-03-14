#include<bits/stdc++.h>
using namespace std;
int n;
string a,b="AB";
void inkq(){
    cout<<a<<" ";
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=b[j];
        if(i==n-1){
            inkq();
        }else{
            Try(i+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a="0";
        for(int i=0;i<n-1;i++){
            a+="0";
        }
        Try(0);
        cout<<endl;
    }
}