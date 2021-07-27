l=[]
for i in range(0,len(arr)):
    if(arr.count(arr[i])>(n//k)):
        l.append(arr[i])
return len(list(set(l)))
