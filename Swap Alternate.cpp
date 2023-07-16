#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    } 

    for(int i=0 ; i<n ; i+=2){
        if(i+1 >=n ){
            break;
        } 
        swap(arr[i],arr[i+1]);
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}