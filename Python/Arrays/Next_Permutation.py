# Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

i=j=len(nums)-1
        
while(i>0 and nums[i-1]>=nums[i]):
    i-=1
            
if(i==0):
    nums.reverse()
    return
        
while(nums[j]<=nums[i-1]):
    j-=1
            
nums[j],nums[i-1]=nums[i-1],nums[j]
        
nums[i:]=nums[len(nums)-1:i-1:-1]
