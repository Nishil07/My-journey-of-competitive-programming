def union_of_2_arrays(a,b):
          a=list(set(a))
          for i in range(len(b)):
              if(b[i] not in a):
                  a.append(b[i])
          return len(a)
