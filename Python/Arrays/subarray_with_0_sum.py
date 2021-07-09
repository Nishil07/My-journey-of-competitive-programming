# Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

def subArrayExists(self,arr,n):
        if(sum(arr)==0 or 0 in arr):
            return True
        
        a=[]
        s=0
        for i in range(0,n):
           s+=arr[i]
           if(s==0):
               return True
           a.append(s)
        
        if(len(set(a))==len(a)):
            return False
        return True
