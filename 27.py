class Solution(object):
    #psuedocode:
    # 1. initiate counter
    # 2. create for loop
    # 3. remove val
    # 4. update counter with each val
    # 5. return val
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        pointer = 0  # This tracks the next position for non-val elements
        for i in range(len(nums)):
            if nums[i] != val:
                nums[pointer] = nums[i]  # Move the non-val element to the front
                pointer += 1  # Increment pointer
        
        return pointer  # pointer represents the number of non-val elements
        