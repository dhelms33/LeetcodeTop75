class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        merged = []
        i, j = 0, 0
        
        # Loop through both words, alternating characters
        while i < len(word1) and j < len(word2):
            merged.append(word1[i])
            merged.append(word2[j])
            i += 1
            j += 1
        
        # Append remaining characters from the longer string
        if i < len(word1):
            merged.append(word1[i:])
        elif j < len(word2):
            merged.append(word2[j:])
        
        return ''.join(merged)
