#include <iostream>
using namespace std;

int fastpower(int a,int b){
    int res=1;
    while(b!=0){
        if(b%2 != 0){
            res = res * a;
        }
        a = a*a;
        b = b/2;
    }
    return res;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<fastpower(a,b);
}