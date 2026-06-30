#include <iostream>
#include <vector>
#include <cmath>
#include <climits> 
using namespace std;
int findMax(vector <int>&piles,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(piles[i]>maxi){
            maxi=piles[i];
        }
    }
    return maxi;
}
int totalNoOfHours(vector<int>&piles,int hourly ){
    int n=piles.size();
    int totalHours=0;
    for(int i=0;i<n;i++){
     totalHours+=ceil((double)piles[i]/(double)hourly);
    
    }
    return totalHours;
}
int minEatingSpeed(vector<int>&piles,int hour){
    int n=piles.size();
    int low=1;int high=findMax(piles,n);
    while(low<=high){
        int mid=(low+high)/2;
        int totalH=totalNoOfHours(piles,mid);
        if(totalH<=hour)  {
            high=mid-1;
        } 
    else{
        low=mid+1;
    } 

}
return low;
}
int main() {
    int n;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);

    cout << "Enter bananas in each pile: ";
    for(int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int h;
    cout << "Enter total hours: ";
    cin >> h;

    cout << "Minimum eating speed = "
         << minEatingSpeed(piles, h);

    return 0;
}