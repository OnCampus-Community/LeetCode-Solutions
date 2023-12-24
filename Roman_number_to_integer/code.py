class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        roman_to_int = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        num = 0
        for i in range(len(s) - 1):
            # Check if the current value is less than the next
            if roman_to_int[s[i]] < roman_to_int[s[i + 1]]:
                # If IV, then it's 5 - 1, which is 4
                num -= roman_to_int[s[i]]
            else:
                num += roman_to_int[s[i]]

        return num + roman_to_int[s[-1]]