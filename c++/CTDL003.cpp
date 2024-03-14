#include<bits/stdc++.h>
using namespace std; string a;
void init(){
    a="0"+a;
    int i=a.size()-1;
    while(i>=1&&a[i]=='1'){
        a[i]='0';
        i--;
    }
        a[i]='1';
    a.erase(a.begin());
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        init();
        cout<<a<<endl;
        }
        return 0;
    }