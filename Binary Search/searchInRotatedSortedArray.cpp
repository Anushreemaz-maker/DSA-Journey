#include <iostream>
using namespace std;
int SearchInRotatedSortedArray(int arr[],int n,int target){
int low=0;
int high=n-1;
while(low<=high){
int mid= (low+high)/2;
if(arr[mid]==arr[low] && arr[mid]==arr[high]){
    low++;
    high--;
}
if(arr[mid]==target){
    return mid;
}
if(arr[low]<arr[mid]){
    if(arr[low]<=target && arr[mid]>target){
        high=mid-1;
    }
    else{
    low=mid+1;}
}
else {
    if(arr[high]>=target && arr[mid]<target){
        low=mid+1;
    }
    else{
    high=mid-1;}
}

}
return -1;
}
int main(){
    int arr[]={7,8,1,2,3,4,5,6};
    int nums[]={3,2,3,3,3};
    int a=5;
    int n=8;
    int ans=SearchInRotatedSortedArray(arr,n,7);
    int word=SearchInRotatedSortedArray(nums,a,2);
    cout<<ans<<" ";
    cout<<word;
    return 0;
}