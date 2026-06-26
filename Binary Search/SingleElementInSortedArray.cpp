#include<iostream>
using namespace std;
int FindSingleElement(int arr[],int n){
if (n==1){
    return arr[0];
}
if (arr[0]!=arr[1]){
    return arr[0];
}
if(arr[n-1]!=arr[n-2]){
    return arr[n-1];
}
int low=1;
int high=n-2;
while(low<=high){
    int mid= (low+high)/2;
    if (arr[mid]!=arr[mid-1]&& arr[mid]!=arr[mid+1]){
        return arr[mid];
    }
    //left
    if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
        low=mid+1;
    }
    else{
        high =mid -1;
    }
}
return 0;

}

int main(){
    int arr[]={2,2,3,3,4,4,5,6,6,7,7};
    int n=11;
    cout<<FindSingleElement(arr,n);
    return 0;

}