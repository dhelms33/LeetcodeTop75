class Solution(object):
    # pseudocode
    # 1. define int max (greatest int of candies) and array result
    # 2. loop through candies and add candies[i] to extra and compare to int and see if greater
    # 3. return true if greater, false otherwise
    # 4. return result
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        max_candies = max(candies)
        result = []
        #loop through candies and add candy[i] + extra and compare to max
        for candy in candies:
            if candy + extraCandies >= max_candies:
                result.append(True)
            else:
                result.append(False)
        return result