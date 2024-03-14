#include<bits/stdc++.h>
using namespace std;
// long long bn(vector<long long> A,int ans,int x){
//     long long l=0,r=A.size()-1,mid;
//     while(l<=r){mid=(l+r)/2;
//         if(A[mid]<=x){
//             ans=mid;
//             l=mid+1;
//         }else{
//             r=mid-1;
//         }
//     }
//     return ans;
// }
// void init(){
    // long long n,x;
    // cin>>n>>x;
    // vector<long long> A;
    // int ans=-1;
    // for(long long i=0;i<n;i++){
    //     int tmp;cin>>tmp;
    //     A.push_back(tmp);
    // }
    // ans=bn(A,ans,x);
    // if(ans==-1)cout<<ans<<endl;else cout<<ans+1<<endl;
    
// }
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n,x,res=0;
    int vt=-1;
    cin>>n>>x;
    vector<long long> a(n+5);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<=x){
            vt=i;
        }
    }
    cout<<vt;
    cout<<endl;
    }
    return 0;
}