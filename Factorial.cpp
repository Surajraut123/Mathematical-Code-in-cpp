#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    //If we taken more then 17 factorial then digit will not come in int range
    //Tha's why, We use long long data type.
    long long res=1;
    for (int  i = 0; i < n; i++)
    {
        res = res*i;
    }
    cout<<"Factorial of "<<n<<" is : "<<res<<endl;
    
}