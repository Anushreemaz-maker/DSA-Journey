#include <iostream>
#include <vector>
using namespace std;
bool possible(vector<int> &bloomday,int day,int m,int k)
{int cnt=0;int noOfBoq=0;
    for(int i=0;i<bloomday.size();i++){
        if(bloomday[i]<=day){
            cnt++;
        }
        else{
            
            noOfBoq+=cnt/k;
            cnt=0;
        }
        
    }
    noOfBoq+=cnt/k;
    return noOfBoq>=m;

}
int minDays(vector<int>& bloomDay, int m, int k){
    int val = m*1LL*k*1LL;
    if(val>bloomDay.size())
    return -1;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<bloomDay.size();i++){
        mini=min(mini,bloomDay[i]);
        maxi=max(maxi,bloomDay[i]);

    }
    int low=mini,high=maxi;
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(bloomDay,mid,m,k)){
            high=mid-1;
        }
    else{
        low=mid+1;
    }}
    return low;
    
}


int main() {
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    cout << minDays(bloomDay, m, k);

    return 0;
}