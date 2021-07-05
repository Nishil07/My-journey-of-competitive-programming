# Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
# Note: can you take care of the duplicates without using any additional Data Structure?

def commonElements (self,A, B, C, n1, n2, n3):
        A = set(A).intersection(set(B))
        A = set(A).intersection(set(C))
        if(len(list(A))==0):
            return []
        A = list(A)
        A.sort()
        return A
