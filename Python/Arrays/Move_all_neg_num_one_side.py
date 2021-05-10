def move_neg_no(n):
    x = 0
    for i in range(len(n)):
        if(n[i]<0):
            temp=n[i]
            n[i]=n[x]
            n[x]=temp
            x+=1
    return n

n = list(map(int,input().split()))
print(move_neg_no(n))
