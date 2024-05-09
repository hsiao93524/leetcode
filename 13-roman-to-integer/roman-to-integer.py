class Solution:
    def romanToInt(self, s: str) -> int:
        res = 0
        val = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        last_char = ""
        for i in range(0, len(s)):
            this_char = s[len(s) - i - 1]
            this_val = val[this_char]
            if last_char != "":
                # print(val[this_char] < val[last_char], val[this_char], val[last_char])
                if val[this_char] < val[last_char]:
                    this_val *= -1
            res += this_val
            last_char = this_char
        return res
