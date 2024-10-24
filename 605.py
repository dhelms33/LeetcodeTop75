class Solution(object):
    # pseudocode:
    # 1. create two loops, one to loop through flowerbed. The other is a while to determine final output
    # 2. if flowerbed item to the left equals 1, return 0
    # 3. else return 1
    # 4. return true
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        length = len(flowerbed)
        
        for i in range(length):
            # Check if the current plot is empty
            if flowerbed[i] == 0:
                # Check the left and right neighbors
                left_empty = (i == 0) or (flowerbed[i-1] == 0)
                right_empty = (i == length-1) or (flowerbed[i+1] == 0)
                
                # If both neighbors are empty, we can plant a flower
                if left_empty and right_empty:
                    flowerbed[i] = 1
                    n -= 1
                    # If we have planted all the required flowers, return True
                    if n == 0:
                        return True
        
        # If after traversing the entire flowerbed, we haven't planted enough flowers, return False
        return n <= 0