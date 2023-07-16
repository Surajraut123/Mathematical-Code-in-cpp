#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int res=0;
    /*
    1) 12!: 12/5 =2 -->At the end 2 zeros come.
    2) 30!: 30/5=6  -->6  times 5 is coming but at 25 = 5*5 i.e upto 30 7 5 is coming.
    therfore we we taken i=i*5.
    */
    for(int i=5;i<=n;i=i*5){
        res = res + (n/i);
    }
    cout<<"Zeros at the end is "<<res<<endl;
}