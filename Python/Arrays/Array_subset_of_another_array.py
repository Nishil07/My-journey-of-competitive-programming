n=len(list(set(a1)))
m=len(list(set(a2)))
if(len(list(set(a1)-set(a2)))==n-m):
    return "Yes"
return "No"


        or

x = a1.issubset(a2)
if(x=='True'):
  return "Yes"
return "No"
