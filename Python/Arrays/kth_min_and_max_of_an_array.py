k=int(input())
n=list(map(int,input().split()))
def find_kth_max_and_min_of_an_array(k):
    for i in range(k-1):
        n.remove(max(n))
        n.remove(min(n))
    return max(n),min(n)
        
    
mx,mn=find_kth_max_and_min_of_an_array(k)
print("Max:",mx,"Min:",mn)

