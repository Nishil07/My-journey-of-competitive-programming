def getMinDiff(arr, n, k):
        arr.sort()
        ans = arr[n-1] - arr[0]
        x = 0
        while(arr[x] - k < 0):
            x+=1
            if(x==n-1):
                break
        for x in range(x,n):
            mn = min(arr[0] + k, arr[x] - k)
            mx = max(arr[n-1] - k,arr[x-1] + k)
            ans = min(mx - mn,ans)
        return ans
