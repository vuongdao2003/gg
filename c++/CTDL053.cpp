#include<bits/stdc++.h>
using namespace std;

void init(){
    vector<int> v;
    v.push_back(0);
    long long n,i=0;
    cin>>n;
    while(n>=1){
        n/=2;
        int tmp=n%2;
        v.push_back(n%2+v[i]);
        i++;
    }
    for(long long x:v){
        cout<<x;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
    }
    return 0;
}