#include<iostream>
using namespace std;

long long int numofdiv(long long int num){

    long long int ans = 0;

    for(long long int i=1ll; i<=num; i++){
        if(num%i == 0){
            ans ++;
        }
    }

    return ans;

    
}

int main(){

    int ans = 0;

    long long int n = 1;

    for(long i=0;;i++){
        n += i;
        int divs  = numofdiv(n);
        if(divs>500){
            cout<<n<<endl;
            break;
        }
    }

    cout<<n<<endl;



}