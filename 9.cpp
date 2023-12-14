#include<iostream>
using namespace std;

int main(){

    int ans =0 ;
    for(int i=1;i<1000;i++){
        for(int j=1;j<1000;j++){
            int k = 1000-i-j;
            if(i>=0 && j>=0 && k>=0){
                if(i*i + j*j == k*k ){
                    ans = i*j*k;
                }
            }
        }
    }

    cout<<ans<<endl;


    //ans : 31875000
}