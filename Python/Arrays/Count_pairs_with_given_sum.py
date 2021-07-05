# Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

def getPairsCount(self, arr, n, k):
        m = {}
        for i in range(0, n):
            if(arr[i] not in m.keys()):
                m[arr[i]]=0
            if(arr[i] in m.keys()):
                m[arr[i]] += 1
        twice_count = 0
        for i in range(0, n):
            if(k-arr[i] in m.keys()):
                twice_count += m[k - arr[i]]
                if (k - arr[i] == arr[i]):
                    twice_count -= 1
        return int(twice_count / 2)
