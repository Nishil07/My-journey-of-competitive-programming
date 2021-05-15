def MinJumps(arr):
  pos=0
  dist=0
  jumps=0
  
  for i in range(len(arr)-1):
      dist = max(dist,i+arr[i])
      
      if(pos==i):
          jumps+=1
          pos=dist
  return jumps
