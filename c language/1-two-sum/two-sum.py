class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(0, len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]

        # for i in range(0, len(nums)):
        #     try:
        #         j = nums.index(target - nums[i], i+1)
        #         return [i, j]
        #     except ValueError:
        #         continue

            

        
        