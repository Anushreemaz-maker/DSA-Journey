#include <iostream>
using namespace std;
int findSqrt(int n){
    int low=1;
    int high=n;
    while(low<=high){
        long long mid= (low+high)/2;
        long long val=mid*mid;
       if(val<=n){
        low=mid+1;
       }
       else{
        high= mid-1;
       }
    }
    return high;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Square root (integer part) = " << findSqrt(n);

    return 0;
}