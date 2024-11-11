#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]<=0) {
            cout<<"Enter positive and non-zero number";
            break;
        }
    }
    int m=-1;
    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) {
            if(arr[j]%arr[i]==0) {
                count++;
            } else {
                break;
            }
        }
        if(count==n) {
            m=arr[i];
            break;
        }
    }
    if(m==-1) {
        cout<<"-1";
    }else{
        cout<<m;
    }

    return 0;
}