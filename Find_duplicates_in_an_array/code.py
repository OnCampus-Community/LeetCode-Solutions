class Solution(object):
    def duplicates_In_Array(self, nums):

        history = {}
        duplicate_set = set()

        for number in nums:
            if number in history:
                duplicate_set.add(number)
            else:
                history[number] = 1

        duplicate_array = sorted(duplicate_set)

        return duplicate_array if duplicate_array else -1
