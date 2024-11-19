class Solution(object):
    #pseudocode:
    #1. Strip any leading or trailing spaces from the string.
    #2. Split the string by spaces to get a list of words, automatically removing extra spaces.
    #3. Reverse the list of words.
    #4. Join the reversed list with a single space and return the result.
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        # Step 1: Strip spaces from start and end, then split into words
        words = s.strip().split()
        
        # Step 2: Reverse the list of words
        words.reverse()
        
        # Step 3: Join the reversed list with a single space
        return ' '.join(words)
