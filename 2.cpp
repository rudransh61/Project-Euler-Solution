#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<0) {return 0;};

    if(n==0||n==1){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
}

int main(){

    int a = 0;
    int b = 1;

    int sum = 0;
    
    int i =0;
    while(fibo(i)<4000000){
        if(fibo(i)%2==0){
            sum += fibo(i);
        }
        i++;
    }

    cout<<sum<<endl;

    return 0;

    //ans  = 4613732
}