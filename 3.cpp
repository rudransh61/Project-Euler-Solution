#include <bits/stdc++.h> 
using namespace std; 
void primeFactors(long long int n)  
{  
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
    for (int i = 3; i*i <= n; i = i + 2)  
    {    
        while (n % i == 0)  
        {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  

    if (n > 2)  
        cout << n << " ";  
}  
int main()  
{  
    long long int n = 600851475143;  
    primeFactors(n);  
    return 0;  




    //ans = 6857
} 