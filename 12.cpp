#include <iostream>
using namespace std;

int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i*i <= n; i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
int main()
{
    int n = 1;
    while (true)
    {
        int triangleNumber = n * (n + 1) / 2;
        if (countDivisors(triangleNumber) > 500)
        {
            cout << "The first triangle number with over 500 divisors is: " << triangleNumber << endl;
            break; // exit the loop when condition is met
        }
        ++n;
    }


    //ans  : 76576500

    return 0;
}
