#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    for(int i=n-1;i>=0;i--) cout<<setprecision(2)<<fixed<<arr[i]<<" ";
    return 0;
}
