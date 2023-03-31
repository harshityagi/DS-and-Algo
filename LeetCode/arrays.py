#1. Two Sum
#M:O(N) T:O(N)
def twoSum(self, nums: List[int], target: int) -> List[int]:
    prevMap={} # val:index
    for i, n in enumerate(nums):
        diff=target-n 
        if diff in prevMap:
            return [prevMap[diff], i]
        prevMap[n]=i
