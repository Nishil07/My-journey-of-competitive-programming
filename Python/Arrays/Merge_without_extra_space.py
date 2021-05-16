def merge(arr1, arr2, n, m):
        arr1.extend(arr2)
        arr1.sort()
        arr2.clear()
        for i in range(n,n+m):
            arr2.append(arr1[i])
        for i in range(n,n+m):
            arr1.pop()
