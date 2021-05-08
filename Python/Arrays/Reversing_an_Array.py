n=list(map(int,input().split()))
for i in range(0,len(n)//2):
    temp=n[len(n)-1-i]
    n[len(n)-1-i]=n[i]
    n[i]=temp
print(n)
