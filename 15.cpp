#include<iostream>
using namespace std;

unsigned int factorial(unsigned int n) 
{ 
    if (n == 0 || n == 1) 
        return 1; 
    return n * factorial(n - 1); 
} 
int main(){

    unsigned int ans=1;
    for(int i=40;i>19;i--){
        ans *= i;
    }
    cout<<ans/factorial(20);




    return 0;
}