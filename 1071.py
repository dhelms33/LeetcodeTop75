import math

class Solution(object):
    # Helper function to find GCD
    def gcd(self, a, b):
        while b:
            a, b = b, a % b
        return a
    
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        # Check if str1 + str2 == str2 + str1, if not return ""
        if str1 + str2 != str2 + str1:
            return ""
        
        # Find the greatest common divisor of the lengths of the two strings
        gcd_len = self.gcd(len(str1), len(str2))
        
        # Return the substring of length gcd_len
        return str1[:gcd_len]