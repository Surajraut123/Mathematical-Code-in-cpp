#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }

    cout<<"Unique Number is : "<<ans<<endl;
}