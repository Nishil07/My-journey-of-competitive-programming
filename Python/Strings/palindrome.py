'''
Palindrome String 
Given a string S, check if it is palindrome or not.
'''
def isPlaindrome(S):
    if(S==S[::-1]):
        return 1
    return 0
