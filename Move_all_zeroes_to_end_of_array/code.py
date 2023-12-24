class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """

        non_zero_elements = []
        count_of_zero = 0

        # Traverse the array and add non-zero elements to the list
        for number in nums:
            if number != 0:
                non_zero_elements.append(number)
            else:
                count_of_zero += 1

        # Add zeroes to the list
        non_zero_elements.extend([0] * count_of_zero)

        # Modify nums in-place
        for i in range(len(nums)):
            nums[i] = non_zero_elements[i]
