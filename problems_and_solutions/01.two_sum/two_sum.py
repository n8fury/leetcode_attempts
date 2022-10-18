# implemented hashmap in python

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}  # declared hashmap as a python dictionary
        for num in range(len(nums)):
            if target-nums[num] in hashmap:
                return [hashmap[target-nums[num]], num]
            else:
                hashmap[nums[num]] = num
