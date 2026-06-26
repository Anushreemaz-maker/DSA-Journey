#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int FindMinimum(int arr[],int n){
    int low=0;int high=n-1;
    int ans =INT_MAX;
    while(low<=high){
        if(arr[low]<=arr[high]){
            ans =min(arr[low],ans);
            break;
        }
        int mid=(low+high)/2;
        ans=min(arr[mid],ans);
        if(arr[mid]<=arr[high]){
            ans=min(arr[mid],ans);
            high=mid-1;
        }
        else{
            ans=min(arr[low],ans);
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={4,5,1,2,3};
    int n=5;
    cout<<FindMinimum(arr,n);
    return 0;
}