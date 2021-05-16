def findDuplicate(nums):
        c=sum(nums)-sum(list(set(nums)))
        c=c//(len(nums)-len(list(set(nums))))
        return c
