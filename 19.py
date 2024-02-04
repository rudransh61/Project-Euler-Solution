from datetime import datetime

sunday_count=0
for j in range(1901,2001):
    for k in  range(1,13):
        y = datetime(j,k,1)
        if y.strftime("%a")=='Sun':
            sunday_count+=1
print(sunday_count)