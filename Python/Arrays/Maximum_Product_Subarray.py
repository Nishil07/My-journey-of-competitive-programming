# Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

prevMin = prevMax = 1
maxProduct = nums[0]
for num in nums:
    prevMin, prevMax = min(num,num*prevMin,num*prevMax), max(num,num*prevMin,num*prevMax)
    maxProduct = max(maxProduct,prevMax)
return maxProduct
