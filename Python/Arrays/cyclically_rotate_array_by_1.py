def rotate( arr, n):
    x=arr[-1]
    arr.insert(0,x)
    arr.pop()
    return arr
