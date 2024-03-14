#include<bits/stdc++.h>
using namespace std;
void dao(stack<int> st,int i){
    if(st.empty()) {cout <<endl;return ;}
    int tmp;
    tmp=st.top();
    cout<<tmp<<' ';
    st.pop();
    return dao(st,i-1);
}
void init(){
    stack<int> st;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        st.push(tmp);
    }
    dao(st,st.size());
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
    }
    return 0;
}