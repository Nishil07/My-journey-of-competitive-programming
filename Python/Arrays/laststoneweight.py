class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        stones.sort(reverse=True)
        while(len(stones)>1):
            x = stones[0]
            y = stones[1]
            if(x==y):
                del stones[1]
                del stones[0]
            elif(x>y):
                stones[0] = x-y
                del stones[1]
            else:
                stones[0] = y-x
                del stones[1]
            stones.sort(reverse=True)
        if(len(stones)==0):
            return 0
        return stones[0]
