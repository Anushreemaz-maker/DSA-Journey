#include <iostream>
#include <algorithm>
using namespace std;
int lowerbound(int arr[],int n,int target){
    int low=0,high=n-1;
    int ans=0;
    while(low<=high){
    int mid=(low+high)/2;
    
    if(arr[mid]>=target){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;}
    return ans;
}

int main() {

    int arr[] = {1,2,2,2,4,5};
    int n = 6;
    //method 1
    int index = lower_bound(arr, arr + n, 2) - arr;
    cout << index<<endl;
    //method 2-manual
    cout<<lowerbound(arr,6,3);
    return 0;
}
//upper bound= arr[mid]>target
// same for search insert position.
//in floor and ceil . ceil is same as lower bound and in floor we search for just smaller value.