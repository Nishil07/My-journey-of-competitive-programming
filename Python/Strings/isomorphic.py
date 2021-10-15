'''
Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
'''

def isIsomorphic(s, t):
    d = {}
    e = {}
    for i in range(len(s)):
        if(s[i] in d.keys() and t[i]!=d[s[i]]):
            return False
        if(t[i] in e.keys() and s[i]!=e[t[i]]):
            return False
        d[s[i]] = t[i]
        e[t[i]] = s[i]
    return True
        
## Better solution
def isIsomorphic(s, t):
    d = set(zip(s, t))
    return len(d) == len(set(s)) == len(set(t))
