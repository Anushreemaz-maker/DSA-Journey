#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int target){
    int mid=low +(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]> target){
        binarySearch(arr,low,mid+1,5);
    }
    else binarySearch(arr,mid-1,high,5);
    return -1;
}
int main(){
    int arr[]={2,4,5,6,7};
    int n=5;
    
    cout<< binarySearch(arr,0,n-1,5);

}