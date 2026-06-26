#include <iostream>
using namespace std;
int func(int n,int m){
    int ans=1;
    while(m>0){
    if(m%2==1){
    ans=ans*n;
    m-=1;
    }
    else{
        n*=n;
        m/=2;
    }
    
}
return ans;}
int NthRootOfM(int n,int m){
    int low=1;int high=m;
    while(low<=high){
        int mid=(low+high)/2;
        int midN=func(mid,n);
        if(midN==m){
            return mid;
        }
        else if(midN<m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    int ans=NthRootOfM(n,m);
    cout<<ans;
    return 0;

}