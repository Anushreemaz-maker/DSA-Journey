#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int NumberOfTimesTheArrayIsRotated(int arr[],int n){
    int low=0,high=n-1;
    int ans=INT_MAX;
    int index=-1;
     while (low <= high) {

        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }
            break;
        }

        int mid = (low + high) / 2;

   
        if (arr[low] <= arr[mid]) {

            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }

            low = mid + 1;
        }

        else {

            if (arr[mid] < ans) {
                ans = arr[mid];
                index = mid;
            }

            high = mid - 1;
        }
    }

    return index;
}
int main(){
    int arr[]={4,5,1,2,3};
    int n=5;
    cout<<"Number of times the Array has been rotated is: "<<NumberOfTimesTheArrayIsRotated(arr,n)<<" .";
    return 0;

}
