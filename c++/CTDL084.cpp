#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
long long ans[105];
void so(){
    queue<string> q;
    q.push("9");
    v.push_back(9);
    while(1){
        string top=q.front();
        q.pop();
        if(top.length()==12) break;
        v.push_back(stoll(top+"0"));
        v.push_back(stoll(top+"9"));
        q.push(top+"0");
        q.push(top+"9");
    }
    for(int i=1;i<=100;i++){
        for(long long x:v){
            if(x%i==0){
                ans[i]=x;
                break;
            }
        }
    }
}
void init(){
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
}
int main(){
    so();
    int t;
    cin>>t;
    while(t--){
        init();
    }
    return 0;
}