arr = list(set(arr))
arr.sort()
c = 1
l=[1]
for i in range(1,len(arr)):
    if(arr[i]==arr[i-1]+1):
        c+=1
    else:
        l.append(c)
        count=1
return max(l)
