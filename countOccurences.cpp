#include<iostream>
using namespace std;
int FirstOccurence(int arr[],int n,int target){
    int first=-1;
    int low=0,high=n-1;
    while(low<=high){
    int mid=(low+high)/2;
    if (arr[mid]==target){
        first=mid;
        high=mid-1;
    }
else if(arr[mid]>target){
    high=mid-1;
}
else{
    low=mid+1;
}
}
return first;
}
int LastOccurence(int arr[],int n,int target){
    int last=-1;
    int low=0,high=n-1;
    while(low<=high){
    int mid=(low+high)/2;
    if (arr[mid]==target){
        last=mid;
        low=mid+1;
    }
else if(arr[mid]>target){
    high=mid-1;
}
else{
    low=mid+1;
}
}return last;}

pair<int,int>FirstOccurenceLastOccurence(int arr[],int n,int target){
int first=FirstOccurence(arr,n,target);
if(first==-1) return {-1,-1};
int last= LastOccurence(arr,n,target);
return{first,last};
}
int CountOccurences(int arr[],int n,int target){
    pair<int,int>ans=FirstOccurenceLastOccurence(arr,n,target);
    if(ans.first==-1) return -1;
    else {
        return ans.second - ans.first + 1;
    }
}
int main() {
    int arr[] = {1,2,2,2,3,5};
    int n = 6;
    int target = 2;

    cout << CountOccurences(arr,n,target);

    return 0;
}