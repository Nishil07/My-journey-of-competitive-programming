class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if(numRows == 1):
            return [[1]]
        if(numRows == 2):
            return [[1], [1,1]]
        l = [[1], [1,1]]
        for i in range(2, numRows):
            a = 0
            b = 1
            x = [1]
            for j in range(i-1):
                x.append(l[-1][a]+l[-1][b])
                a+=1
                b+=1
            x.append(1)
            l.append(x)
        return l
