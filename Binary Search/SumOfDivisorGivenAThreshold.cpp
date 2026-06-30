#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int SumOfD(vector <int>&nums,int divisor){
int sum=0;
for(int i=0;i<nums.size();i++){
    sum= sum + ceil((double)nums[i]/(double) divisor);

}
return sum;
}

int smallestDivisor(vector<int>& nums, int threshold){
int low=1;int high= *max_element(nums.begin(),nums.end());
while(low<=high){
    int mid=(low+high)/2;
    int ans=SumOfD(nums,mid);
    if(ans>threshold){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return low;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << smallestDivisor(nums, threshold);

    return 0;
}