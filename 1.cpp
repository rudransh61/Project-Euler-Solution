#include<iostream>
using namespace std;

int main(){

    int a = 3,b = 5;
    int ans = 0;
    for(int i=0;i<1000;i++){
        if(i%3==0 || i%5==0){
            ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;

    //ans  = 233168
}