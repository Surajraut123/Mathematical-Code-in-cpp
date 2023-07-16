#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"You Numeber : ";
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit = n%10;
        if((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
            return 0;
        }
        //Because At one time, range of ans is going out of int range. To avoid this we Used.
        //i.e [2^31, 2^31-1]; 2^31 = int_min. and 2^31-1 = int_max.
        //And we know we have no other chance to multiply with 10 to ans.
        //ans*10 = (int_max*10)/10 -->10,10 cancel. i.e. ans*10 = int_max.
        //But In this case ans*10 = it is again going out of int range if any particular no comes.
        //ans = int_max/10.


        /*
        Problem is here ans*10>int_max(2^31);
        and ans*10<int_min(2^31-1)

        Instead of this we done line no 12.

        */
        ans = (ans*10)+digit;
        n=n/10;
    }
    cout<<"Reverse Number : "<<ans<<endl;

    return 0;
}