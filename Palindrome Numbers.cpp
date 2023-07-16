#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int r=0,digi=0;
    int p=n;
    while(n>0){
        digi = n%10;
        int r = r*10 +digi;
        n=n/10;
    }
    if(r == n){
        cout<<"Number is Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome "<<endl;
    }
}