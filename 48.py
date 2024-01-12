ans = 0

for i in range(1,1001):
    term = 1
    for j in range(1,i+1):
        term = (term*i)%10000000000
    ans = (ans+term)%10000000000
    
print(ans)

## ans : 9110846700