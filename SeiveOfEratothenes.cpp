#include <iostream>
#include <array>
using namespace std;

void seiveOfEratoSthenes(int n){
    bool isPrime[n+1];
    for (int i = 0; i < n; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i*i <= n; i++)
    {
        for (int j = 2*i; j <= n; j+=i)
        {
            isPrime[j] = false;
        }
    }
    for(int i=0;i<20;i++){
        cout<<i<<" "<<isPrime[i]<<endl;
    }
    
}

int main(){
    bool isPrime[20];
    seiveOfEratoSthenes(20);
    

}