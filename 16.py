ans = 1;

def getSum(n): 
    
    sum = 0
    for digit in str(n):  
      sum += int(digit)       
    return sum

for i in range(1,1001):
    ans =  ans*2 
    
print( getSum(ans) )

# ans :1366