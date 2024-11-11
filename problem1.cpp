#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++) {
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++) {
        sum+=arr1[i]*arr2[i];
    }
    cout<<sum;
    return 0;
}